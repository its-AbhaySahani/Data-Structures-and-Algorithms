# find max absolute difference between any two element in array . aj > ai and j > i means without chaning the order of array therefore without using heapq
# do this by taking the example of best time to buy and sell stock question in leetcode
import sys
def max_absolute_difference(n, arr):
    max_diff = -sys.maxsize
    for i in range(n):
        for j in range(i+1, n):
            max_diff = max(max_diff, arr[j]-arr[i])
    return max_diff


