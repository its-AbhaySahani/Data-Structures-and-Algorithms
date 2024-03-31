import sys
from typing import List
class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        ans = 0
        j = -1
        prevMinKIndex = -1
        prevMaxKIndex = -1

        for i, num in enumerate(nums):
            if num < minK or num > maxK:
                j = i
            if num == minK:
                prevMinKIndex = i
            if num == maxK:
                prevMaxKIndex = i
            ans += max(0, min(prevMinKIndex, prevMaxKIndex) - j)

        return ans
    
# let's test the solution
nums = [2, 1, 4, 3]
minK = 2
maxK = 3
print(Solution().countSubarrays(nums, minK, maxK)) 
