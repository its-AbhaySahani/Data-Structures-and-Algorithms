#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    vector<int> id;
public:
    UnionFind(int n) : id(n) {
        iota(begin(id), end(id), 0);
    }
    void connect(int a, int b) {
        id[find(b)] = find(a);
    }
    int find(int a) {
        return id[a] == a ? a : (id[a] = find(id[a]));
    }
    bool connected(int a, int b) {
        return find(a) == find(b);
    }
    void reset(int a) { id[a] = a; }
};
class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& A, int firstPerson) {
        sort(begin(A), end(A), [](auto &a, auto &b) { return a[2] < b[2]; }); // Sort the meetings in ascending order of meeting time
        int i = 0, M = A.size();
        UnionFind uf(n);
        uf.connect(0, firstPerson); // Connect person 0 with the first person
        vector<int> ppl;
        while (i < M) {
            ppl.clear();
            int time = A[i][2];
            while (i < M && A[i][2] == time) { // For all the meetings happending at the same time
                uf.connect(A[i][0], A[i][1]); // Connect the two persons
                ppl.push_back(A[i][0]); // Add both persons into the pool
                ppl.push_back(A[i][1]);
                ++i;
            }
            for (int n : ppl) { // For each person in the pool, check if he/she's connected with person 0.
                if (!uf.connected(0, n)) uf.reset(n); // If not, this person doesn't have secret, reset it.
            }
        }
        vector<int> ans;
        for (int j = 0; j < n; ++j) {
            if (uf.connected(0, j)) ans.push_back(j); // Push all the persons who are connected with person 0 into answer array
        }
        return ans;
    }
};

// Now makw the main function to test the solution
int main() {
    Solution s;
    vector<vector<int>> A = {{0, 1, 1}, {1, 2, 2}, {2, 3, 3}, {3, 4, 4}, {4, 5, 5}, {5, 6, 6}, {6, 7, 7}, {7, 8, 8}, {8, 9, 9}, {9, 10, 10}};
    int n = 11, firstPerson = 0;
    vector<int> ans = s.findAllPeople(n, A, firstPerson);
    for (int a : ans) cout << a << " ";
    return 0;
}