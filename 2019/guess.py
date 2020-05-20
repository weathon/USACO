import copy

f=open("guess.in","r")
def myinput():
    return f.readline()
# myinput=input
n=int(myinput())
mydict={}
attributes={}
# 双向索引列表

for i in range(n):
    
    thisline=myinput().split()
    name=thisline[0]
    num=int(thisline[1])
    # mydict[name]
    mydict[name]=[]
    for j in range(num):
        mydict[name].append(thisline[j+2])
        try:
            attributes[thisline[j+2]].append(name)
        except:
            attributes[thisline[j+2]]=[name]
            
# print(mydict)
maxans=0
addedsingle=False
# print(attributes)
backup=copy.deepcopy(attributes)
for name in mydict.keys():
    # print(name)
    attributes=backup
    thisans=0
    gong_tong_shu_liang_zui_duo_de_shu_xing=0
    num_of_gong_tong_shu_liang_zui_duo_de_shu_xing=0
    mymax=0
    for p in mydict[name]:
        if len(attributes[p])>=mymax:
            mymax=len(attributes[p])
    gong_tong_shu_liang_zui_duo_de_shu_xing=mymax
    lastp=""
    ifbreak=True
    while(1):
        ifbreak=True
        for p in mydict[name]:
            if len(attributes[p])<=gong_tong_shu_liang_zui_duo_de_shu_xing:
                gong_tong_shu_liang_zui_duo_de_shu_xing=len(attributes[p])
                num_of_gong_tong_shu_liang_zui_duo_de_shu_xing+=1
                if attributes[p]==1:
                    num_of_gong_tong_shu_liang_zui_duo_de_shu_xing+=1
                attributes[p].append("")
                # if p==lastp:
                ifbreak=False
                # break
                # lastp=p
        if ifbreak:
            break

    thisans=num_of_gong_tong_shu_liang_zui_duo_de_shu_xing
    if thisans>maxans:
        maxans=thisans
f.close()
print(maxans)
with open("guess.out","w") as f2:
    f2.write(str(maxans))