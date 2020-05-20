f=[]
for i in range(30):
    a=[]
    for j in range(30):
        a.append(0)
    f.append(a)

Bx,By,Mx,My=input().split()
Bx=int(Bx)
By=int(By)
Mx=int(Mx)
My=int(My)

f[Mx][My] = -1
if (Mx >= 2 and My >= 1):
    f[Mx - 2][My - 1] = -1
if (Mx >= 1 and My >= 2):
    f[Mx - 1][My - 2] = -1
if (Mx >= 1):
    f[Mx - 1][My + 2] = -1
if (Mx >= 2):
    f[Mx - 2][My + 1] = -1
f[Mx + 1][My + 2] = -1
f[Mx + 2][My + 1] = -1
if (My >= 2):
    f[Mx + 1][My - 2] = -1
if (My >= 1):
    f[Mx + 2][My - 1] = -1

f[Bx][By+1]=1
for i in range(Bx,-1,-1):
    for j in range(By,-1,-1):
        if f[i][j] != -1:
            right=down=0
            if (f[i + 1][j] != -1):
                    right = f[i + 1][j]
            if (f[i][j + 1] != -1):
                    down = f[i][j + 1]
            f[i][j]=down+right

print(f[0][0])

#python顺利AC但是c++爆数据类型