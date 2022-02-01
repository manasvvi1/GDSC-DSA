// https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;
        
        if(head == NULL){
            return NULL;
        }
        
        slow = head;
        fast = head->next;
        
        while(fast!=NULL){
            slow = slow->next;
            
            if(fast->next!= NULL) fast = fast->next->next;
            else fast = fast->next;
        }
        
        return slow;
    }
};