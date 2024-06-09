import collections
from typing import List
class Solution:
  def subarraysDivByK(self, nums: List[int], k: int) -> int:
    ans = 0
    prefix = 0
    count = [0] * k
    count[0] = 1

    for num in nums:
      prefix = (prefix + num % k + k) % k
      ans += count[prefix]
      count[prefix] += 1

    return ans
  
# lets test the function
nums = [4,5,0,-2,-3,1]
k = 5
print(Solution().subarraysDivByK(nums, k)) 