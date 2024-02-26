#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
 public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p || !q)
      return p == q;
    return p->val == q->val &&              //
           isSameTree(p->left, q->left) &&  //
           isSameTree(p->right, q->right);
  }
};

// Now let's test the program
int main() {
  Solution* obj = new Solution();
  TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
  TreeNode* q = new TreeNode(1, new TreeNode(2), new TreeNode(3));
  cout << obj->isSameTree(p, q) << endl;
  return 0;
}