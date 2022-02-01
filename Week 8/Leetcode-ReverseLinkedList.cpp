// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *present, *nextNode;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        present = head;
        nextNode = head->next;
        
        while(present!=NULL){
            if(present == head){
                prev = present;
                present->next = NULL;
                present = nextNode;
                nextNode = nextNode->next;
            }
            else{
                present->next = prev;
                prev = present;
                present = nextNode;
                if(nextNode!=NULL) nextNode = nextNode->next;
            }
        }
        
        return prev;
    }
};