with open("lineup.in","r") as fin:
    myin=fin.read()

cows=['Beatrice', 'Belinda', 'Bella', 'Bessie', 'Betsy', 'Blue', 'Buttercup', 'Sue']#sorted
myset=[]
myansdict={}
index=0
for i in cows:
    myansdict[i]=index
    index+=1

# print(1)


def dfs(used_rule,cow):
    for i in myset:
        if not (i in used_rule):
            #自己实现in
            index=1
            # print(i)
            for j in i:
                if j==cow:
                    used_rule.append(i)
                    return [cow]+dfs(used_rule,i[index])
                index-=1
    return [cow] #返回cow而不是空数组，现在chain完成了



myset=[]
def main():
    ans=[]
    mylist=myin.split("\n")
    N=int(mylist[0])
    string_list=mylist[1:]
    # print(string_list)
    for i in range(N):#可优化 用range是怕空行
        ii=string_list[i].split(" ")
        # print(ii)
        myset.append([ii[0],ii[5]])

    chains=[]
    for i in cows:
        # print(dfs([],i)) #完成了，也会出现不同顺序的，而且不止包含了有规则的，没规则的也包括了，也包括了一些一半的，想办法去掉，只剩下37分钟了
        chains.append(dfs([],i)) #倩倩下来送东西我吃，打乱思路，说算了4个小时
    #同等项目选最小的,不用排序比较，set{}
    set_dict={} #key是set，value是同一set的不同实现
    # chains=set(chains)#优化速度
    # print(chains)

    for c in chains:
        # print(c)
        try:
            set_dict[str(set(c))]+=[c]#set不可以作为key
        except:
            set_dict[str(set(c))]=[c] 
    # print(set_dict)
    for i in set_dict:
        # set_dict[i]=min(set_dict) 这个min是单个而不是数组，自己实现
        mymin=set_dict[i][0]
        for j in set_dict[i]:
            if j<mymin:
                mymin=j
        set_dict[i]=mymin

    #按照第一个排序，然后去重
    # 用旧方法，修改数字？
    
    # for a in myansdict:#
    #     for b in set_dict:
    #         for c in set_dict[b]:

    for a in set_dict: #每一个条件
        index=0
        for b in set_dict[a]: # 条件中的每一个项目
            if index == 0:
                Aindex=myansdict[b]
            else:
                myansdict[b]=Aindex+0.01*index #修改这个之前全乱了，弄得好慌，现在加了*index好了  发抖啊
            index+=1
    # print(myansdict)
    # ansstring=""

    # The line up here is from https://blog.csdn.net/tangtanghao511/article/details/47810729
    # print(1)
    ansstring=""
    pp=sorted(myansdict.items(),key=lambda item:item[1])
    print(pp)
    for i in pp:
        # print(i)
        ansstring+=i[0]+"\n"
    with open("lineup.out","w") as f:
        f.write(ansstring)
    # for _ in range(8):
    #     mymin=100000
    #     myminname=""
    #     for i in myansdict:
    #         if myansdict[i]<mymin:
    #             myminname=i 
    #             del i
    #     ansstring+="\n"+str(myminname)
    # print(ansstring)

main()