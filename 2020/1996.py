#n=int(input())
#m=int(input())
string=input().split()
n=int(string[0])
m=int(string[1])
index=0
mcount=0
array=[]
array.append(0)#wangle
for i in range(n):
    array.append(i+1)
#print(array)
while(n>1):
    mcount+=1;
    index+=1;
    if(index==n+1):
        index=1;
    if(mcount==m):
       mcount=0;
       #index-=1;
       #if(index==0): index=n-1;#was index=1, seems nochanged
       print(array[index]);
       del array[index];
       index-=1
       n-=1;
print(array[1])
        
