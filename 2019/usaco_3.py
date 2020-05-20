with open("lineup.in","r") as fin:
    myin=fin.read()

def switch(a):
    if a==0:
        return 1
    else:
        return 0
myset=[]
def dfs(last,next,deepth):
    # print((last,next))
    if deepth==7:
        return [next]
    else:
        for i in myset:
            # print((last,i))
            if last != i:
                for j in [0,1]:
                    if i[j]==next:
                        o=dfs(i,i[switch(j)],deepth+1)
                        if o==-1:
                            return -1
                        else:
                            return [next]+o
        return -1


cows=[ "Bessie", "Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"]
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
    ans=[]

    for i in myset:
        for j in [0,1]:
            thisans=dfs("",i[j],0)
            if thisans != -1:
                ans.append(thisans)

    for i in cows:
        a=dfs(cows,0)
        if a != -1:
            ans.append(a)
    print(ans)
# with open("lineup.out","w") as fout:
    # fout.write(main())
main()
