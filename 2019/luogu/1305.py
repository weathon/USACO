n=input()
tree={}
iffirst=1
for i in range(int(n)):
    line=input()
    tree[line[0]]=[line[1],line[2]]
    if iffirst:
        first=line[0]
        iffirst=0

# print(tree)
def dfs(key):
    print(key,end="")
    for i in tree[key]:
        if i != "*":
            dfs(i)
        else:
            # return
            pass

dfs(first)