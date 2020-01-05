n=input()
n=int(n)
# //先判断单双数
# https://leetcode.com/contest/weekly-contest-169/problems/find-n-unique-integers-sum-up-to-zero/
ans=[]
if n%2==0:#双数
    for i in range(1,n//2+1):
        ans.append(i)
        ans.append(-i)
else:
    for i in range(1,n//2+1):
        ans.append(i)
        ans.append(-i)
    ans.append(0)
print(ans)