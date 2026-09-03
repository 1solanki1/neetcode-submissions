class Solution {
public:
bool isSubtree(TreeNode* root, TreeNode* subroot) {
    if(!root)return false;
    if(same(root,subroot))return true;
return isSubtree(root->left,subroot)||isSubtree(root->right,subroot);
}



private : bool same(TreeNode* root, TreeNode* subroot){
   
    if(!root && !subroot)return true;
     if(!root||!subroot)return false;
    if(root->val!=subroot->val)return false;
return  same(root->left,subroot->left)&&same(root->right,subroot->right);
}

};
