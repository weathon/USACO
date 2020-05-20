N,M,K=input().split()
N=int(N)
M=int(M)
K=int(K)
si=[]
ci=[]
ctong=[]
maxc=0
for i in range(N):
    tmp1,tmp2=input().split()
    si[i]=int(tmp1)
    ci[i]=int(tmp2)
    if(ci[i]>maxc):
        maxc=ci[i]

for i in range(maxc+1):
    ctong.append(0)

for i in range(N):
    ctong[ci[i]]+=1



