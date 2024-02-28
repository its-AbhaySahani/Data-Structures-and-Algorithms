from collections import deque
import sys
import queue


class Solution:
    def findBottomLeftValue(self, root: TreeNode) -> int:
        if not root:
            return None
        
        queue = deque([root])
        leftmost = None
        
        while queue:
            level_size = len(queue)
            for i in range(level_size):
                node = queue.popleft()
                if i == 0:
                    leftmost = node.val
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        
        return leftmost
