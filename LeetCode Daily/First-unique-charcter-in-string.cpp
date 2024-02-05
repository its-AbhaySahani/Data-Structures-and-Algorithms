// 387. First Unique Character in a String Leetcode
#include <iostream>
#include <unordered_map>
using  namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        for (char ch : s) {
            charCount[ch]++;
        }

        for (int i = 0; i < s.length(); ++i) {
            if (charCount[s[i]] == 1) {
                return i;
            }
        }

        return -1; 
    }
};

int main() {
    Solution solution;

    // Example usage
    string input = "leetcode";
    int result = solution.firstUniqChar(input);

    cout << "First Unique Character Index: " << result << std::endl;

    return 0;
}
