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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
q.push(root);
        vector<vector<int>>ans;
        while(root==NULL)return ans;
        while(!q.empty()){
              int n=q.size();
                vector<int>level;
            for(int i=0;i<n;i++){
              
                TreeNode* akshay =q.front();q.pop();
                if(akshay->left!=NULL)q.push(akshay->left);
                if(akshay->right!=NULL)q.push(akshay->right);
                level.push_back(akshay->val);}

            ans.push_back(level);

     }return ans;
     }};

