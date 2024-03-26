# implement a code that pring left view of a binary tree
class node:     
    def __init__(self, data): 
        self.data = data 
        self.left = None
        self.right = None
def leftView(root):
    if root is None:
        return
    queue = []
    queue.append(root)
    while queue:
        count = len(queue)
        for i in range(count):
            temp = queue.pop(0)
            if i == 0:
                print(temp.data, end=' ')
            if temp.left:  
                queue.append(temp.left)
            if temp.right:   
                queue.append(temp.right)

            
# Test the function
root = node(1)
root.left = node(2)
root.right = node(3)
root.left.left = node(4)
root.left.right = node(5)
root.right.left = node(6)
root.right.right = node(7)
print(leftView(root))
  