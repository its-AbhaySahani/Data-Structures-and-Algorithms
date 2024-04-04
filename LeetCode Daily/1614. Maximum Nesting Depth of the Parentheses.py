# 1614. Maximum Nesting Depth of the Parentheses leetcode
import re
class Solution:
    def maxDepth(self, s: str) -> int:
        ans = d = 0
        for c in s:
            if c == '(':
                d += 1
                ans = max(ans, d)
            elif c == ')':
                d -= 1
        return ans
# Let's test the function
s = Solution()
print(s.maxDepth("(1+(2*3)+((8)/4))+1")) 