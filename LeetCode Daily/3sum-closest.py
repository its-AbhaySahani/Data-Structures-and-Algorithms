# 3 sum closest to target - LeetCode Daily Challenge
import sys
from typing import List
class Solution:
  def threeSumClosest(self, nums: List[int], target: int) -> int:
    nums.sort()
    n = len(nums)
    closest = sys.maxsize
    for i in range(n):
      left, right = i + 1, n - 1
      while left < right:
        total = nums[i] + nums[left] + nums[right]
        if abs(target - total) < abs(target - closest):
          closest = total
        if total < target:
          left += 1
        elif total > target:
          right -= 1
        else:
          return total
    return closest  

# Test the funtions 
nums = [-1, 2, 1, -4]
target = 1
print(Solution().threeSumClosest(nums, target)) 