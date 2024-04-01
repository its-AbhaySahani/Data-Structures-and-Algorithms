# Length of last word in a string (https://leetcode.com/problems/length-of-last-word/)
import re
import string
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip()
        if not s:
            return 0
        s = s.split()
        return len(s[-1])
    
# Lets test the function
s = Solution()
print(s.lengthOfLastWord("Hello World"))