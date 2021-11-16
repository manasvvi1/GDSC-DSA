//  https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0, j = nums.size();;){
            int mid = (i + j)/2;
            
            if(nums[mid] == target){
                return mid;
            }
            
            if(nums[mid] > target){
                if(mid == 0){
                    return 0;
                }
                else{
                    if(nums[mid-1] < target){
                        return mid;
                    }
                    
                    j = mid - 1;
                    continue;
                }
            }
            
            if(nums[mid] < target){
                if(mid == nums.size() - 1){
                    return nums.size();
                }
                else{
                    if(nums[mid+1] > target){
                        return mid+1;
                    }
                    
                    i = mid + 1;
                    continue;
                }
            }
            
            if(i == j){
                return i;
            }
        }
        
        return 0;
    }
};