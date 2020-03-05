f=open("triangles.in","r")
N=int(f.readline())
x={}
y={}
myX=[]
myY=[]
for i in range(N):
    string=f.readline().split()
    X=string[0]
    Y=string[1]
    myX.append(X)
    myY.append(Y)
    try:
        x[X].append(Y)
    except:
        x[X]=[Y]
    try:
        y[Y].append(X)
    except:
        y[Y]=[X]

f.close()
ans=0
for i in range(N):#遍历每一个点
    for xi in x[myX[i]]:
        for yi in y[myY[i]]:
            xi=int(xi)
            yi=int(yi)
            if(xi==int(myX[i]) or yi==int(myY[i])): continue
            ans+=abs(xi-int(myX[i]))*abs(yi-int(myY[i]))
            if(ans>1000000007): ans=ans%1000000007
f=open("triangles.out","w")
printf=f.write
printf(str(ans))
f.close()
