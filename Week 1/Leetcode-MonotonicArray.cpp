//  https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing=true, isDecreasing=true;
        
        for(int i=0;i<(nums.size()-1);i++){
            if(nums[i]>nums[i+1]){
                isIncreasing=false;
            }
            else if(nums[i]<nums[i+1]){
                isDecreasing=false;
            }
        }
        if(!isDecreasing && !isIncreasing){
                return false;
        }
        else{
            return true;
        }
    }
};