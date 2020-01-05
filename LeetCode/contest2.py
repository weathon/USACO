class Solution:
    def dfs(self,root):
            if root==None: return
            anslist.append(root.val)
            self.dfs(root.left)
            self.dfs(root.right)
            
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        self.anslist=[]
        #网上查资料算作弊吗

        self.dfs(root1)
        self.dfs(root2)

        return anslist.sorted()
