//  https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum[n], count=0;
        
        for(int i = 0 ; i < n ; i++){
            count += nums[i];
            sum[i] = count;
        }
        
        for(int i = 0 ; i < n ; i++){
            if((i == 0) && ((sum[n-1]-sum[0]) == 0)){
                    return 0;
            }
            else if((i == (n-1)) && (sum[n-2] == 0)){
                    return n-1;
            }
            else if((i>0) && (i<(n-1))){
                if(sum[i-1] == (sum[n-1] - sum[i])){
                    return i;
                }
            }
        }
        
        return -1;
    }
};

// another solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            right += nums[i];
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            right -= nums[i];
            
            if(left == right){
                return i;
            }
            
            left += nums[i];
        }
        
        return -1;
    }
};