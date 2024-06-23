# Given an array of integer nums and an integer k , return the total number of  subarrays whose sum equals to k. A subarray is contiguous non-empty part of an array.
import collections
def subarraySum(nums, k):
    count = 0
    sum = 0
    d = collections.defaultdict(int)
    d[0] = 1
    for i in range(len(nums)):
        sum += nums[i]
        count += d[sum - k]
        d[sum] += 1
    return count

# Test cases
print(subarraySum([1,1,1], 2))
