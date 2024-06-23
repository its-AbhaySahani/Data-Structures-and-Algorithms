// 151. Reverse Words in a String leeetcode
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string reverseWords(string s) {
            string ans = "";
            int i = 0;
            while(i < s.size()) {
                while(i < s.size() && s[i] == ' ') i++;
                if(i >= s.size()) break;
                int j = i;
                while(j < s.size() && s[j] != ' ') j++;
                string word = s.substr(i, j - i);
                if(ans.size() == 0) ans = word;
                else ans = word + " " + ans;
                i = j;
            }
            return ans;
        }
};  
int main() {
    Solution s;
    cout << s.reverseWords("the sky is blue") << endl;
    return 0;
}