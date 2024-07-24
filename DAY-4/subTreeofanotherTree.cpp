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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        if (isSameTree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

private:
    bool isSameTree(TreeNode* s, TreeNode* t) {
        if (!s && !t) return true;
        if (!s || !t) return false;
        if (s->val != t->val) return false;
        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }
};

// Helper function to create a new tree node
TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    node->left = node->right = NULL;
    return node;
}

int main() {
    Solution solution;

    TreeNode* root1 = newNode(3);
    root1->left = newNode(4);
    root1->right = newNode(5);
    root1->left->left = newNode(1);
    root1->left->right = newNode(2);

    TreeNode* subRoot1 = newNode(4);
    subRoot1->left = newNode(1);
    subRoot1->right = newNode(2);

    cout << (solution.isSubtree(root1, subRoot1) ? "true" : "false") << endl;

  
    return 0;
}
