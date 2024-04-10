#include <bits/stdc++.h>
#include <deque>
#include<vector>

using namespace std;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(), deck.rend());
        deque<int>dq;
        for(int card: deck) {
            if(!dq.empty()) {
                dq.push_front(dq.back());
                dq.pop_back();

            }
            dq.push_front(card);

        }
        return{dq.begin(), dq.end()};
        
    }
};

// let's test the code
int main() {
    Solution s;
    vector<int> deck = {17, 13, 11, 2, 3, 5, 7};
    vector<int> res = s.deckRevealedIncreasing(deck);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}