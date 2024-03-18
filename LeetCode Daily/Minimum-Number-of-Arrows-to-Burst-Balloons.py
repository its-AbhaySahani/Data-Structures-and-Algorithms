# Minimum Number of Arrows to Burst Balloons leetcode
import sys
from typing import List
class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x: x[-1])
        arrows = 0
        end = -sys.maxsize
        for point in points:
            if point[0] > end:
                arrows += 1
                end = point[-1]
        return arrows
    
# lets test the solution
s = Solution()
print(s.findMinArrowShots([[10,16],[2,8],[1,6],[7,12]])) 


        