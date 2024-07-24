#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return sumOfLeftLeavesHelper(root, false);
    }

private:
    int sumOfLeftLeavesHelper(TreeNode* node, bool isLeft) {
        if (node == NULL) return 0;
        
    
        if (node->left == NULL && node->right == NULL) {
            if (isLeft) {
                return node->val;
            } else {
                return 0;
            }
        }
        
        int leftSum = sumOfLeftLeavesHelper(node->left, true);
        int rightSum = sumOfLeftLeavesHelper(node->right, false);
        
        return leftSum + rightSum;
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
    root1->left = newNode(9);
    root1->right = newNode(20);
    root1->right->left = newNode(15);
    root1->right->right = newNode(7);

    cout << "Sum of Left Leaves = " << solution.sumOfLeftLeaves(root1) <<endl;

    
    return 0;
}
