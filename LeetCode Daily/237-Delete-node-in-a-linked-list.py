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