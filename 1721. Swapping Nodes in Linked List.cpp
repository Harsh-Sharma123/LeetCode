class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head, *first;
        int len=0;
        if(head==NULL) return NULL;
        while(temp){
            temp = temp->next;
            len++;
        }
        temp = head;
        int i=0;
        while(i<k){
            first = temp;
            temp = temp->next;
            i++;
        }
        temp = head;
        i = 0;
        while(i<len-k){
            temp = temp->next;
            i++;
        }
        int num = first->val;
        first->val = temp->val;
        temp->val = num;
        
        return head;
    }
};