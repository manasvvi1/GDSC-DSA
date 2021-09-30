//  https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/

class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        int num = INT_MIN;
        //vector<int> smallNums;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < x){
                
                num = max(num, arr[i]);
                //smallNums.push_back(arr[i]);
            }
        }
        
        if(num == INT_MIN){
            return -1;
        }
        
        return num;
        
        // sort(smallNums.begin(), smallNums.end());
        
        // if(smallNums.size() != 0){
        //     return smallNums.back();
        // }
        // else return -1;
    }
};