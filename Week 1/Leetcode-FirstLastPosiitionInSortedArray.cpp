//  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> indexes;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(target == nums[i]){
                indexes.push_back(i);
                break;
            }
        }
        
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            if(target == nums[i]){
                indexes.push_back(i);
                break;
            }
        }
        
        if(indexes.size() == 0){
            indexes.push_back(-1);
            indexes.push_back(-1);
        }
        
        return indexes;
    }
};