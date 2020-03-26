N,T=input().split()
N=int(N)
T=int(T)
cp=[]
mylist=[]
for i in range(N):
    tmp1,tmp2=input().split()
    cp.append(int(tmp2)/int(tmp1))
    mylist.append([int(tmp1),int(tmp2)])

# print(cp)
# cp排序了，mylist没有，没有结构体

mylist.sort()

ans=0
for i in range(N):
    # print(mylist[i][1])
    print((ans,T))#为什么最终结果回比所有加起来都要大

    if T>=mylist[i][0]:
        ans+=mylist[i][1]
        T-=mylist[i][0]
    else:
        ans+=mylist[i][1]*(T/mylist[i][0])#这个反了
        break

print(ans)#为什么最终结果回比所有加起来都要大
#qianqian叫我早点睡反而打扰我

