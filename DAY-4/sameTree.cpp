#include <bits/stdc++.h>
using  namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    node->left = node->right = NULL;
    return node;
}

int main() {
    Solution solution;

    TreeNode* root1a = newNode(1);
    root1a->left = newNode(2);
    root1a->right = newNode(3);

    TreeNode* root1b = newNode(1);
    root1b->left = newNode(2);
    root1b->right = newNode(3);

    cout << (solution.isSameTree(root1a, root1b) ? "true" : "false") <<endl;

    
    return 0;
}
