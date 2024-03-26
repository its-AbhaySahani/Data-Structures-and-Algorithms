# implementing level order traversal of a binary tree using queue
import sys
from collections import deque
class node: 
    def __init__(self, data): 
        self.data = data 
        self.left = None
        self.right = None
def levelOrder(root):
    if root is None:
        return
    queue = deque()
    queue.append(root)
    
    while queue:
        temp = queue.popleft()
        print(temp.data, end=' ')
        if temp.left:
            queue.append(temp.left)
        if temp.right:
            queue.append(temp.right)