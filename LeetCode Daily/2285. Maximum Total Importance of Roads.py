import collections
from typing import List
class Solution:
  def maximumImportance(self, n: int, roads: List[List[int]]) -> int:
    count = [0] * n

    for u, v in roads:
      count[u] += 1
      count[v] += 1

    count.sort()
    return sum((i + 1) * c for i, c in enumerate(count))

# Let's test the solution
n = 4
roads = [[1, 0], [2, 0], [3, 0]]
print(Solution().maximumImportance(n, roads))
