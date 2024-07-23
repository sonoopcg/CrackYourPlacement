#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
int solve (TreeNode* root,int& diameter){
    if(root==NULL) return 0;
    
    int lst=solve(root->left,diameter);
    int rst=solve(root->right,diameter);
    diameter = max(diameter, lst + rst);
    return 1+max(lst,rst);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        solve(root, diameter);
        return diameter;
        
    }
};
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    int diameter = solution.diameterOfBinaryTree(root);
    cout << "Diameter of the tree: " << diameter <<endl;

    return 0;
}
    