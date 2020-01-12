P=int(input())
# ans=1
def dfs(p):
    global ans
    if p==1:
        # ans=ans*2
        return 2
    elif p%2==0:
        #evens
        tmp=dfs(p/2)
        return tmp*tmp
        # ans=ans*tmp*tmp
    else:
        #odds
        tmp=dfs(p//2)
        return tmp*tmp*2

ans=dfs(P)
strans=str(ans-1)
if len(strans) > 500:
    final=(strans[-500:])
elif len(strans) == 500:
    final=strans
else:
    final="0"*(500-len(strans)+1)+strans
# print(final)
for i in range(10):
    for j in range(50):
        # print((i,j))
        print(final[i*50+j+1],end="")#i*50, not 10
    print()