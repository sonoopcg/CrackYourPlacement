#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<string> ans;
    
    void solve(TreeNode *root, string s) {
        if (!root) return;
        
        s += to_string(root->val);
        
        if (!root->left && !root->right) {
            ans.push_back(s);
            return;
        }
        
        s += "->";
        
        solve(root->left, s);
        solve(root->right, s);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        solve(root, "");
        return ans;
    }
};

int main() {
    // Create a sample tree:
    //     1
    //    / \
    //   2   3
    //    \
    //     5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution solution;
    vector<string> paths = solution.binaryTreePaths(root);

    cout << "Binary Tree Paths:" << endl;
    for (const string& path : paths) {
        cout << path <<endl;
    }

    // Cleanup memory (for good practice)
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
