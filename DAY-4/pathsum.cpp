#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL) return (sum == root->val);
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    node->left = node->right = NULL;
    return node;
}

int main() {
    Solution solution;
    TreeNode* root1 = newNode(5);
    root1->left = newNode(4);
    root1->right = newNode(8);
    root1->left->left = newNode(11);
    root1->left->left->left = newNode(7);
    root1->left->left->right = newNode(2);
    root1->right->left = newNode(13);
    root1->right->right = newNode(4);
    root1->right->right->right = newNode(1);

    int sum1 = 22;
    cout << (solution.hasPathSum(root1, sum1) ? "true" : "false") <<endl;

    
   
    return 0;
}
