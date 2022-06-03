#include <bits/stdc++.h>

using namespace std;
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
    int getDecimalValue(ListNode* head) {
        int i= length(head)-1;
        int res = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            res += (temp->val) * pow(2,i);
            temp = temp->next;
            i--;
        }
        return res;
    }
};