class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        int found=0;
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left && temp->right){
                    if((temp->left->val==x && temp->right->val==y) || (temp->left->val==y && temp->right->val==x)){
                        return false;
                    }
                }
                
                if(temp->val==x || temp->val==y){
                    if(++found == 2) return true;
                }
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            if(found == 1) return false;
        }
        return false;
    }
};