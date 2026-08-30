/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
return  s(root)!=-1;
    }

    int s(TreeNode* root){
        if(root==NULL)return 0 ;
        int l=  s(root->left);
        int r=  s(root->right);
        if(r==-1||l==-1)return -1;

      if(abs(l-r)>1) return -1;
      return max(l,r)+1;
    }
};
