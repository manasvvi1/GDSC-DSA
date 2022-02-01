// https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==NULL) return;
        else if(node->next == NULL) node = NULL;
        else{
            node->val = node->next->val;
            node->next = node->next->next;
        }
    }
};