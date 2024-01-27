#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        // Skip trailing whitespaces
        while (i >= 0 && s[i] == ' ') {
            --i;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            ++length;
            --i;
        }

        return length;
    }
};

int main() {
    Solution solution;

    // Example usage
    string input = "Hello World";
    int result = solution.lengthOfLastWord(input);

    cout << "Length of Last Word: " << result << std::endl;

    return 0;
}
