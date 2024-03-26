# pre-order psudocode in python
import sys

class node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.rigth = None

def printPreorder(root):
    if root:
        print(root.val),
        printPreorder(root.left)
        printPreorder(root.right)

# Test the function
root = node(1)
root.left = node(2)
root.right = node(3)
root.left.left = node(4)
root.left.right = node(5)

print("Preorder traversal of binary tree is")
printPreorder(root)