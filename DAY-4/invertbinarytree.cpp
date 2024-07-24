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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};

TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    node->left = node->right = NULL;
    return node;
}

void printInOrder(TreeNode* node) {
    if (node == NULL) return;
    printInOrder(node->left);
    std::cout << node->val << " ";
    printInOrder(node->right);
}

int main() {
    Solution solution;
    TreeNode* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->left = newNode(6);
    root->right->right = newNode(9);

    cout << "Original tree (in-order): ";
    printInOrder(root);
    cout << endl;

    solution.invertTree(root);

    cout << "Inverted tree (in-order): ";
    printInOrder(root);
    cout <<endl;

    return 0;
}
