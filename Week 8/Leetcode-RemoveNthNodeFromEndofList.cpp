// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        
        if(head->next == NULL && n == 1){
            return NULL;
        }
        
        ListNode* temp = head;
        int total = 1;
        
        while(temp->next!=NULL){
            total++;
            temp = temp->next;
        }
        
        if(total < n){
            return head;
        }
        
        temp = head;
        int count = 1;
        ListNode *prev = head;
        
        while((count+n-1)!=total){
            count++;
            prev = temp;
            temp = temp->next;
        }
        
        if(temp->next == NULL){
            prev->next = NULL;
        }
        else{
            temp->val = temp->next->val;
            temp->next = temp->next->next;
        }
        
        return head;
    }
};