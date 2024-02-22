// find the town judge leetcode in cpp
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n+1, 0), out(n+1, 0);
        for(auto t : trust) {
            out[t[0]]++;
            in[t[1]]++;
        }
        for(int i = 1; i <= n; i++) {
            if(in[i] == n-1 && out[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};

// make the main function for testing
int main() {
    Solution s;
    vector<vector<int>> trust = {{1, 3}, {2, 3}, {3, 1}};
    cout << s.findJudge(3, trust) << endl;
    return 0;
}