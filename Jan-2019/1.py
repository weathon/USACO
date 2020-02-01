with open("word.in","r") as f:
    con=f.read()
NK=con.split("\n")[0]
N=int(NK.split(" ")[0])
K=int(NK.split(" ")[1])
words=con.split("\n")[1].split(" ")

wordlen=[]
for i in range(N):
    wordlen.append(len(words[i]))
# print((N,K))
# print(wordlen)
outputessay=""
thislinelen=0
for i in range(N):
    # print(thislinelen+wordlen[i])
    if(thislinelen+wordlen[i]>K):
        outputessay=outputessay+"\n"+words[i] #sometimes the\n does,'t work? Last time remoced that 
        # print(words[i])
        thislinelen=wordlen[i]#Not 0, but wordlen[i]  number of line is right, but still not space
    else:
        outputessay+=(" "+words[i]) #" "+XX not backwo
        thislinelen+=wordlen[i]
    # print((thislinelen,"_"))

# print(outputessay)
with open("word.out","w") as f:
    f.write(outputessay[1:])