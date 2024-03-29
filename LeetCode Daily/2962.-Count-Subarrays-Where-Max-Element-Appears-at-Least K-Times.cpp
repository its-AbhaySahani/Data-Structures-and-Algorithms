#include <vector>
#include <algorithm>
#include <ranges>
using namespace std;
class Solution {
 public:
  long long countSubarrays(vector<int>& nums, int k) {
    const int maxNum = ranges::max(nums);
    long long ans = 0;
    int count = 0;

    for (int l = 0, r = 0; r < nums.size(); ++r) {
      if (nums[r] == maxNum)
        ++count;
      // Keep the window to include k - 1 times of the maximum number.
      while (count == k)
        if (nums[l++] == maxNum)
          --count;

      ans += l;
    }

    return ans;
  }
};