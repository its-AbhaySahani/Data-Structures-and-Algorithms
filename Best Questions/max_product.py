# find max product of two integers in an array such that one of them is always negative. eg: [6,7,1,-1,2,4] : output = -1 . Do this in 2n time complexity
import sys
def max_product(n, arr):
    max_neg = -sys.maxsize
    max_pos = -sys.maxsize
    for i in range(n):
        if arr[i] < 0:
            max_neg = max(max_neg, arr[i])
        else:
            max_pos = max(max_pos, arr[i])
    return max_neg * max_pos
arr = [6,7,1,-1,2,4]
n = len(arr)
print(max_product(n, arr))

