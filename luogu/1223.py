n=int(input())
numlist=input().split()
old_numlist=numlist[:]
for i in range(n):
    numlist[i]=int(numlist[i])

numlist.sort()

# print((numlist,old_numlist))
for i in numlist:
    index=0
    for j in old_numlist:
        # print((i,j))
        if int(j)==i:
            print(index+1,end=" ")#不是输出时间而是编号
            old_numlist[j]=-100
        index+=1
print()
sumtime=0
for i in range(n):
    for j in range(i):
        sumtime+=numlist[j]
        
print("%.2f" % (sumtime/n))

#只有90分，第一个点没过，样例啊，重复数字，添加第16行