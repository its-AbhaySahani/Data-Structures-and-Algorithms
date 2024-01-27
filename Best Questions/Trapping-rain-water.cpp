// 42 leetcode - Two pointer approach
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int result = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                // Move from the left side
                leftMax = max(leftMax, height[left]);
                result += leftMax - height[left];
                ++left;
            } else {
                // Move from the right side
                rightMax = max(rightMax, height[right]);
                result += rightMax - height[right];
                --right;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = solution.trap(height);

    cout << "Amount of Trapped Water: " << result << std::endl;

    return 0;
}
