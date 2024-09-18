# 179 leetcode solution
def solution():
    def largestNumber(nums):
        if not any(nums):
            return "0"
        return "".join(sorted(map(str, nums), key=lambda n: n*9, reverse=True))
    nums = [3, 30, 34, 5, 9]
    print(largestNumber(nums))