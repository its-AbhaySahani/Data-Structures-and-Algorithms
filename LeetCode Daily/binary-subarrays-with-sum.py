import collections
from typing import List

class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        count = collections.Counter({0: 1})
        res = pre = 0
        for num in nums:
            pre += num
            res += count[pre - goal]
            count[pre] += 1
        return res
# lets test the solution
s = Solution()
print(s.numSubarraysWithSum([1,0,1,0,1], 2)) 