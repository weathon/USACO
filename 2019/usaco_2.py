with open("whereami.in","r") as fin:
    myin=fin.readlines()

N=int(myin[0])
mystr=myin[1].split("\n")[0]#忘了转换
# print(mystr)

def main():
    for n in range(1,N):#len of str  不包含最后一个数
        used=[]
        for i in range(N-n+1):#begining point of str 不包含最后一个数
            this_str=mystr[i:i+n]#分片不跑含后面那个数字
            if this_str in used:
                break #已经有相同的了，没必要找下去了
            else:
                used.append(this_str)
            if i==(N-n):#完全没有相同的
                return n

with open("whereami.out","w") as fout:
    fout.write(str(main()))