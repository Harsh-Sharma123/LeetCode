class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level=1, l=1;
        int sum=INT_MIN;
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int s = 0;
            for(int i=0;i<n;i++){
                TreeNode* t = q.front();
                q.pop();
                s += t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(s > sum){
                l = level;
                sum = s;
            }
            level++;
        }
        return l;
    }
};