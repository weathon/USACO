n=input()
rootid=0
tree=[["",[]]]
dirlist=[""]
count=0
# 直接用字符串数组判断路径是否存在？

anslist=[]
for i in range(int(n)):
    path=input()
    fulldir=""
    for i in path.split("/"):
        if i=="": continue 
        fulldir+=("/"+i)
        # print(fulldir)
        if fulldir in dirlist:#效率很低，其实就是用列表代替了树，可以分段查找？排序好模拟树？
            pass
        else:
            dirlist.append(fulldir)
            count+=1
    # print(count)
    anslist.append(count)

for i in anslist: print(i)

    

# 屏幕不闪了 还是闪
# 新数据结构
# key:[[full_dirname,[sub_trees_id]]....[]]? XX

