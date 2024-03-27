import math
from typing import List
class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k <= 1:
            return 0
        count = left = 0
        product = 1

        for right, num in enumerate(nums):
            product *= num

            while product >= k:
                product /= nums[left]
                left += 1
            count += right - left + 1
        
        return count
 # Let's test the solution
sol = Solution()
print(sol.numSubarrayProductLessThanK([10, 5, 2, 6], 100)) 
