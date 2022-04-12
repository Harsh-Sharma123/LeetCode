class Solution {
public:
    
    void helper(TreeNode* root, int height, int &ans){
        if(root==NULL)
            return ;
        helper(root->left, height+1, ans);
        
        if(!root->left && !root->right){
            ans = min(ans, height);
        }
        helper(root->right, height+1, ans);
    }
    
    int minDepth(TreeNode* root) {
        int ans = INT_MAX;
        helper(root, 1, ans);
        return ans==INT_MAX?0:ans;
    }
};