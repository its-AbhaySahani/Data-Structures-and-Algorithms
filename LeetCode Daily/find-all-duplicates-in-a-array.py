import collections
from typing import List
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        myset = set()
        result = []
        for i in nums:
            length = len(myset)
            myset.add(i)
            if length == len(myset):
                result.append(i)
        return result

# let us test the code
sol = Solution()
print(sol.findDuplicates([4,3,2,7,8,2,3,1]))