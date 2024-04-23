# we have n, k= 1, arr = [-6,5,2,-1,7]. Operations: i -> arr[i] = -arr[i]   k times ....find maximum sum after the process
# import sys
# def max_sum(n, k, arr):
#     if k == 0:
#         return sum(arr)
#     if k%2 == 0:
#         return sum(arr)
#     else:
#         return sum(arr) - 2*min(arr)
# n = 5
# k = 1
# arr = [-6,5,2,-1,7]
# print(max_sum(n, k, arr)) 

# Lets optimize the code using heap
import heapq
def max_sum(n, k, arr):
    heapq.heapify(arr)
    for i in range(k ):
        x = heapq.heappop(arr) 
        heapq.heappush(arr, -x)
    return sum(arr)
n = 5
k = 1
arr = [-6,5,2,-1,7]
print(max_sum(n, k, arr))