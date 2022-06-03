class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode *cur=new ListNode();
        cur->next = head;
        head = cur;
        while (cur->next != NULL)
            if (cur->next->val == val) 
                cur->next = cur->next->next;
            else 
                cur = cur->next;
        
        return head->next;
    }

};