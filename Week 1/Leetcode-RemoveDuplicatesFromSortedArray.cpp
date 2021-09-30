//  https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        else{
            int temp=nums[0];
            for(int i=1;i<nums.size();i++){
                if(temp==nums[i]){
                    nums.erase(nums.begin()+i);
                    i--;
                }
                else{
                    temp=nums[i];
                }
            }
        }
        
        
        return nums.size();
    }
};