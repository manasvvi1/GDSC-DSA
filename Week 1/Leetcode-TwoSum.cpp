//  https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        
        sort(nums.begin(),nums.end());
        
        if(target > nums[nums.size()/2]){
            int sum;
            for(int i = 0 ; i < nums.size()/2 ; i++){
                for(int j = nums.size()/2 ; i < nums.size() ; i++){
                    sum = nums[i] + nums[j];
                    if(target==sum){
                        index.push_back(i);
                        index.push_back(j);
                        return index;
                    }
                }
            }
        }
        else{
            for(int i = 0 ; i < nums.size()/2 ; i++){
                int sum;
                for(int j = i + 1 ; i < nums.size()/2 ; i++){
                    sum = nums[i] + nums[j];
                    if(target == sum){
                        index.push_back(i);
                        index.push_back(j);
                        return index;
                    }
                }
            }
        }
        return index;
    }
};