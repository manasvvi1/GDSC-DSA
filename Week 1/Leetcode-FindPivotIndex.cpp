//  https://leetcode.com/problems/find-pivot-index/

//  TLE received

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum[n], count=0;
        
        for(int i = 0 ; i < n ; i++){
            count += sum[i];
            sum[i] = count;
        }
        
        for(int i = 0 ; i < n ; i++){
            if(i == 0){
                if(sum[n-1] == 0){
                    return 0;
                }
            }
            else if(i == (n-1)){
                if(sum[n-2] == 0){
                    return n-1;
                }
            }
            else{
                if(sum[i-1] == (sum[n-1] - sum[i+1])){
                    return i;
                }
            }
        }
        
        return -1;
    }
};