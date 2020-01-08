i1=input()
i2=input()
p1,p2,p3=i1.split()
p1,p2,p3=int(p1),int(p2),int(p3)
# python模拟还是不好写，尤其是字符串
ans=""
for i in range(len(i2)-1):
    last=i2[i-1]
    next=i2[i+1]
    # if last=="-":#上一个为减号，这一个不用输出 ？考虑到不展开的情况
    #     continue #注意不是pass
    if i2[i] != "-": pass
    #出现了减号
    #检测两边同为数字或者同为字母
    elif ord(last)>ord(next):
        ans+=i2[i]
        # ans+=next #右边比左边大 错！ 反了
        continue
    elif ord(next)==ord(last):
        # pass#不能是pass？刚才以为是逻辑，现在是避免后面一个不输出
        ans+=i2[i] #相同不输出减号，不，差一才是
        # ans+=next
        continue
    elif ord(next)-ord(last)==1:
        #只差一个，不输出减号，上一个字符也不用输出？后面处理？
        # ans+=i2[i]
        # ans+=next
        continue
    elif ord(last)>=ord('a') and ord(last)<=ord('z') and ord(next)>=ord('a') and ord(next)<=ord('z'):
        # ans=ans[:-1]#删除上一个字符 不用删除上一个字符，直接后面不遍历就好了，但是最后一个为了一致性还是要单独输出(上面直接跳过了)
        #同为字母
        if p1 == 1:
            #填充小写字母
            if p3 == 1:
                #顺序
                for k in range(ord(last)+1,ord(next)):
                    ans+=(chr(k))*p2
            else:
                #逆序
                for k in range(ord(next)-1,ord(last),-1):
                    ans+=(chr(k))*p2              
        if p1 == 2:
            #填充大写字母
            if p3 == 1:
                #顺序
                for k in range(ord(last)+1,ord(next)):
                    ans+=(chr(k-32))*p2
            else:
                #逆序
                for k in range(ord(next)-1,ord(last),-1):
                    ans+=(chr(k-32))*p2 
        if p1 == 3:
            #填充*
                for k in range(ord(last)+1,ord(next)):
                    ans+=("*")*p2    
        # ans+=next
        continue
    elif ord(last)>=ord('0') and ord(last)<=ord('9') and ord(next)>=ord('0') and ord(next)<=ord('9'):
        #同为数字
        # ans=ans[:-1]#删除上一个字符  不用删除上一个字符
        if p1 != 3:
            if p3 == 1:
                #顺序
                for k in range(ord(last)+1,ord(next)):
                    ans+=(chr(k))*p2
            else:
                #逆序  逆序出问题，把最后一个也弄进来了，之前一直没检查逆序 是上面错了 40行
                for k in range(ord(next)-1,ord(last),-1):
                    ans+=(chr(k))*p2              
        if p1 == 3:
            #填充*
                for k in range(ord(last)+1,ord(next)):
                    ans+=("*")*p2  
        # ans+=next
        continue#不能只在前面用pass，最后一个else
    #没有处理一边字母一边数字的情况，看了下载数据
    else:
        ans+=i2[i]
        # ans+=next
        continue#漏了
    ans+=i2[i]
# ans+=i2[-1]#最后一位，但如果之前以及输出过了？
ans+=i2[-1]#但是这样会造成结尾-？连续--
print(ans)


# 2 2 2
# 9-a-a
# 连续减号