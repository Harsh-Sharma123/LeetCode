class Solution {
public:
    int ans=0;
    
    int fun(TreeNode* root){
        if(root==NULL) return 1;
        
        int l = fun(root->left);
        int r = fun(root->right);
        
        if(l==2 || r==2){
            ans++;
            return 0;
        }
        return min(l, r)+1;
    }
    
    int minCameraCover(TreeNode* root) {
        ans += (fun(root)==2);    
        return ans;
    }
};