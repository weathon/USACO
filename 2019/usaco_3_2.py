with open("lineup.in","r") as fin:
    myin=fin.read()

cows=['Beatrice', 'Belinda', 'Bella', 'Bessie', 'Betsy', 'Blue', 'Buttercup', 'Sue']#sorted
mydict={}
index=0
for i in cows:
    mydict[i]=index
    index+=1

# 不是所有牛都被规定,所以根本不需要递归，想复杂了，直接桶

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
    # print(myset)
    #类似冒泡排序，有规定的就交换位置
    # 为了暴政排序好的不会被后面的弄乱，先插入有共享项目的小的
    # 建立chain,字典？链表？
    

    for i in myset:
        if i[0] > i[1]:
            i[0],i[1]=i[1],i[0]
        # 此行可优化,不用调换真实位置，修改index? 输出
        # 为了暴政排序好的不会被后面的弄乱，先插入有共享项目的小的

        index2=0
        for j in cows:
            if j==i[0]:
                Aindex=index2
            elif j==i[1]:
                mydict[j]=Aindex+0.1#插入两个之间
            index2+=1

        # The line of code up here is from https://www.runoob.com/python/att-list-insert.html

    print(mydict)
# with open("lineup.out","w") as fout:
    # fout.write(main())
main()
