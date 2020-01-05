n=input()
tree={"/":[]}
num_of_node=0

times=0
for i in range(int(n)):
    path=input()
    nodes=path.split("/")[:]
    newnodes=[]
    for i in nodes:
        if i != "":
            newnodes.append(i)
    # print(nodes)原因是第一个item is ""
    nodes=newnodes
    fatherNode="/"
    for dirname in nodes:
        if dirname in tree[fatherNode]:
            # 这里也要新建? NO
            pass
        else:
            # 新建文件夹 次数总是多一，因为把更目录也算进来了，为什么fatherNode是空而不是”/“？ line 12  / > "" >XX
            print((";;;",fatherNode))
            tree[fatherNode].append({dirname:[]})
            # tree[dirname]=[]
            times+=1
        fatherNode=dirname
    print(times)

print(tree)

#这么少的代码量？？？？？？
#两种树表示法，一种是像json,字典的数值是另一棵树，另一种是引用下一个key 
# 错误样例：连续相同还是会加一 单独/会变为空  第二种没考虑同名