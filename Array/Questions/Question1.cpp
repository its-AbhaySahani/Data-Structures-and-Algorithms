// You have an array a of 3 positive integers. You wrote out the sums of all non-empty subsequences of this array, sorted them in non-decreasing order, and got an array b of 7 integers.

// For example, if a={1,4,3}, then what you wrote out is 1, 4, 3, 1+4=5, 1+3=4, 4+3=7, 1+4+3=8. After sorting, he got an array b={1,3,4,4,5,7,8}. Unfortunately, You lost the array a. Now you only have the array b left.Can you guess the orignal array a.

// Input Format

// The first line contains one integer t — the number of test cases.

// Each test case consists of one line which contains 7 integers b1,b2,…,b7.

// Constraints

// 1<=t<=10 (1≤bi≤109; bi≤bi+1).

// Output Format

// For each test case, print 3 integers — a1, a2 and a3. If there can be several answers, print any of them.

// Sample Input 0

// 5
// 1 3 4 4 5 7 8
// 1 2 3 4 5 6 7
// 300000000 300000000 300000000 600000000 600000000 600000000 900000000
// 1 1 2 999999998 999999999 999999999 1000000000
// 1 2 2 3 3 4 5
// Sample Output 0

// 1 4 3
// 4 1 2
// 300000000 300000000 300000000
// 999999998 1 1
// 1 2 2
// Explanation 0

// Note The subsequence of the array a is a sequence that can be obtained from a by removing zero or more of its elements.

// Two subsequences are considered different if index sets of elements included in them are different. That is, the values of the elements don't matter in the comparison of subsequences. In particular, any array of length 3 has exactly 7 different non-empty subsequences.

// Solution  in cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        vector<ll> v(7), res;
        for (int i = 0; i < 7; i++) cin >> v[i];
        sort(v.begin(), v.end());
        // Checking if the difference between consecutive elements is increasing or decreasing 
        

