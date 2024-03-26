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