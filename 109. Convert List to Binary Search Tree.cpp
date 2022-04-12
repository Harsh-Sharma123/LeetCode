class Solution {
public:
    
    TreeNode* tree(vector<int> v, int start, int end){
        if(start == end) return new TreeNode(v[start]);
        
        if(start > end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* t = new TreeNode(v[mid]);
        t->left = tree(v, start, mid-1);
        t->right = tree(v, mid+1, end);
        
        return t;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        if(head == NULL) return NULL;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        return tree(v, 0, v.size()-1);
    }
};