# Remove Zero Sum Consecutive Nodes from Linked List leetcode
import collections
import ListNode as ListNode
class Solution:
    def removeZeroSumSublists(self, head: ListNode) -> ListNode:
        # Create a dummy node to handle edge cases
        dummy = ListNode(0)
        dummy.next = head
        # Initialize prefix sum and dictionary
        prefix = 0
        seen = collections.OrderedDict()
        seen[0] = dummy
        # Traverse the linked list
        node = dummy
        while node:
            prefix += node.val
            # If prefix sum is already in the dictionary, remove all nodes between the previous occurrence and the current one
            while prefix in seen and seen[prefix].next != node:
                del seen[seen[prefix].next.val]
                seen[prefix].next = seen[prefix].next.next
            # Otherwise, add the prefix sum to the dictionary
            if prefix not in seen:
                seen[prefix] = node
            node = node.next
        return dummy.next
# Lets test the function with an example
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(-3)
head.next.next.next.next = ListNode(1)
sol = Solution()
print(sol.removeZeroSumSublists(head))
