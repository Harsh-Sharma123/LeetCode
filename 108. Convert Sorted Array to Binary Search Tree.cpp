class Solution {
public:
    
    TreeNode* tree(vector<int> &nums, int start, int end){
        if(start == end) return new TreeNode(nums[start]);
        
        if(start > end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->left = tree(nums, start, mid-1);
        t->right = tree(nums, mid+1, end);
        return t;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return tree(nums, 0, nums.size()-1);
    }
};