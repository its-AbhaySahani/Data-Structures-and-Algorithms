# flatten a tree to a linked list
class node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
def flatten(root):
    if root is None:
        return
    queue = []
    queue.append(root)
    while queue:
        temp = queue.pop(0)
        if temp.left:
            queue.append(temp.left)
        if temp.right:
            queue.append(temp.right)
        if queue:    
            temp.right = queue[0]   
        temp.left = None
