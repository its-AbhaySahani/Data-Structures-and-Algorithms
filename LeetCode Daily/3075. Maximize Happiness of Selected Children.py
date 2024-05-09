 # 3075. Maximize Happiness of Selected Children
import heapq
from typing import List
class Solution:
  def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
    ans = 0
    decremented = 0

    happiness.sort(reverse=True)

    for i in range(k):
      ans += max(0, happiness[i] - decremented)
      decremented += 1

    return ans