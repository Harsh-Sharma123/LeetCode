class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode();
        ListNode* temp = node;
        int sum = 0;
        while(l1!=NULL || l2!=NULL || sum!=0){
            if(l1!=NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            temp->next = new ListNode(sum%10);
            sum /= 10;
            temp = temp->next;
        }
        return node->next;
    }
};