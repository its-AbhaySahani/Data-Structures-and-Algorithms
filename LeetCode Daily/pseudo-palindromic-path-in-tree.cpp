// pseudo-palindromic path in binary tree leetcode
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int pseudoPalindromicPaths (TreeNode* root) {
            int count = 0;
            vector<int> n (10, 0);

            pseudo_count(root,n,count);
            return count;

        }
        void pseudo_count(TreeNode * node, vector<int>& n, int& count) {
            if (!node) return ; 
            n[node->val]++;
            pseudo_count(node->left,n,count);
            pseudo_count(node->right,n,count);

            if(node->left==NULL && node->right ==NULL)
            {
                int flag =0;
                for (int i= 0 ; i <=9 ; i++) {
                    if (n[i]%2!=0)flag++;
                    
                }
                if(flag==1 || flag ==0)count++;

            }
            n[node->val]--;

        }
};


