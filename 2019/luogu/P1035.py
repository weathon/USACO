k=int(input())
sum=0
n=1
while 1:
    sum+=1/n
    if(sum>k):
        print(n)
        quit()
    n+=1
