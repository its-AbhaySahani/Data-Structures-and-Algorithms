import re

class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []  # unpaired '(' indices
        chars = [c for c in s]
        for i, c in enumerate(chars):
            if c == '(':
                stack.append(i)  # Record the unpaired '(' index.
            elif c == ')':
                if not stack:  # Find a pair
                    chars[i] = '*'  # Mark the unpaired ')' as '*'.
                else:
                    stack.pop()
        # Mark the unpaired '(' as '*'.
        while stack:
            chars[stack.pop()] = '*'
        return ''.join(chars).replace('*', '')
