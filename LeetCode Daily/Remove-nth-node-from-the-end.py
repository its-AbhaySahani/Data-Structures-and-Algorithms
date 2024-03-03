# Remove nth node from the end of the linked list
import sys
import os
from typing import List
from collections import deque
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        dummy = ListNode(0)
        dummy.next = head
        fast = dummy
        slow = dummy

        # Move fast pointer forward by n steps
        for _ in range(n + 1):
            fast = fast.next

        # Move both pointers simultaneously until fast reaches the end
        while fast:
            fast = fast.next
            slow = slow.next

        # Remove the nth node from the end
        slow.next = slow.next.next

        return dummy.next
# Now make the object of the class and call the function
sol = Solution()
print(sol.removeNthFromEnd([1,2,3,4,5], 2))

