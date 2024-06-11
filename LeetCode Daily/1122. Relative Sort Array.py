import collections
from typing import List
class Solution:
  def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
    ans = []
    count = [0] * 1001

    for a in arr1:
      count[a] += 1

    for a in arr2:
      while count[a] > 0:
        ans.append(a)
        count[a] -= 1

    for num in range(1001):
      for _ in range(count[num]):
        ans.append(num)

    return ans
  
# lets test the function
arr1 = [2,3,1,3,2,4,6,7,9,2,19]
arr2 = [2,1,4,3,9,6]
print(Solution().relativeSortArray(arr1, arr2))
