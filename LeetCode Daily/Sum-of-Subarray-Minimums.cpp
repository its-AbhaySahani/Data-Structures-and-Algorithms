// Sum of Subarray Minimums leetcode 
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<long long> prefix, suffix;
        prefix.push_back(0);
        for (auto &x : arr) {
            x += prefix.back();
            prefix.push_back(min(prefix.back(), x));
            }
        reverse(arr.begin(), arr.end());
        suffix.push_back(0);
        for (auto &y : arr) {
            y = min(suffix.back(), y + suffix.back());
            suffix.push_back(y);
            }
        reverse(arr.begin(), arr.end());
        long long res = 0;
        for (int i=0;i<arr.size()-1;++i)
        res+=prefix[i+1] - prefix[i] + suffix[i+1
        ] - suffix[i];
        return res % ((1e9)+7);
        }
        };

