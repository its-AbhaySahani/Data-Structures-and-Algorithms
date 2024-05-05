import collections
from typing import List

class linkedListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def deleteNode(self, node):
        node.val = node.next.val
        node.next = node.next.next

# lets test the solution
node = linkedListNode(4)
node.next = linkedListNode(5)
node.next.next = linkedListNode(1)
node.next.next.next = linkedListNode(9)
