/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        int len=0;
        while(head!=NULL){
            head=head->next;
            len++;
        }
     
        return len;
    }
    ListNode* middleNode(ListNode* head) {
         if(head==NULL)
            return NULL;
        int len= length(head);
        int mid=len/2;
        int i=0;
        while(head!=NULL && i<mid){
            head=head->next;
            i++;     
        }
        return head;
    }
};