from typing import List

class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        rows = [0] * len(mat)
        cols = [0] * len(mat[0])

        for i, row in enumerate(mat):
            for j, n in enumerate(row):
                if n == 1:
                    rows[i] += 1
                    cols[j] += 1

        ans = 0

        for i, c in enumerate(cols):
            if c == 1:
                for j, r in enumerate(rows):
                    if r == 1 and mat[i][j] == 1:
                        ans += 1

        return ans
