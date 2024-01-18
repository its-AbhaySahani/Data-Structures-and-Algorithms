// Unique number of occurance leetcode
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequencyMap;
        for (int num : arr) {
            frequencyMap[num]++;
        }

        unordered_set<int> uniqueOccurrencesSet;
        for (const auto& entry : frequencyMap) {
            if (!uniqueOccurrencesSet.insert(entry.second).second) {
                return false;
            }
        }

        return true;

    }
};

// Test the solution
int main() {
    vector<int> test1 = {1, 2, 3, 1};
    Solution sol;
    cout << sol.uniqueOccurrences(test1) << endl;

    
}
