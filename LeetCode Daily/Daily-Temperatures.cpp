#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> result(n, 0);
        stack<int> indexStack;  // Stack to store indices of temperatures

        for (int i = 0; i < n; ++i) {
            // Check if the current temperature is warmer than the temperature at the top of the stack
            while (!indexStack.empty() && T[i] > T[indexStack.top()]) {
                int prevIndex = indexStack.top();
                indexStack.pop();
                result[prevIndex] = i - prevIndex;
            }

            // Push the current index onto the stack
            indexStack.push(i);
        }

        return result;
    }
};

int main() 
    Solution solution;

    // Example usage
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = solution.dailyTemperatures(temperatures);
    cout << "Next Warmer Temperatures: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;

