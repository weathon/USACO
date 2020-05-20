#https://leetcode.com/contest/weekly-contest-169/problems/jump-game-iii/
arr=[4,2,3,0,3,1,2]

start=0


possible=[]
for i in arr:
    possible.append(0)#反向查找？NO去过的地方不用再找？0表示没去过，1表示去过

mylen=len(arr)
def dfs(where):
    if(possible[where])==1:
        return
    possible[where]=1#漏了
    po1=where+arr[where]
    po2=where-arr[where]
    if po1+1<=mylen:
        dfs(po1)
    if po2>=0:
        dfs(po2)

ans=False
dfs(start)
for i in range(len(arr)):
    if arr[i]==0 and possible[i]==1:
        ans=True
# return ans
print(ans)
