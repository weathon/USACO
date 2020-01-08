word=input()
essay=input()
after_split=[]
tmp=""
for i in essay:
    if i==" ":
        after_split.append(tmp)
        after_split.append(" ")
    else:
        tmp+=i

count=0
first=1
ifex=0
index=0
count=0
firstplace=0

for i in after_split:
    if i.lower()==word and first==1:
        ifex=1
        first=0
        firstplace=index
    if i.lower() ==word:
        count+=1
    index+=(len(i))

if(ifex==0): print(-1)
else: print(firstplace+" "+count)
