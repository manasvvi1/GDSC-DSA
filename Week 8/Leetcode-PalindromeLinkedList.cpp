// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        vector<int> arr;
        
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i]!=arr[arr.size()-i-1]){
                return false;
            }
        }
        
        return true;
    }
};