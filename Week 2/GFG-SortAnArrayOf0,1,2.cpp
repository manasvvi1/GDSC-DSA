//  https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int arr[3] = {0};
        
        for(int i = 0 ; i < n ; i++){
            arr[a[i]]++;
        }
        
        for(int i = arr[0] ; i > 0 ; i--){
            a[arr[0] - i] = 0;
        }
        
        for(int i = arr[1] ; i > 0 ; i--){
            a[arr[1] - i + arr[0]] = 1;
        }
        
        for(int i = arr[2] ; i > 0 ; i--){
            a[arr[2] - i + arr[0] + arr[1]] = 2;
        }
        
    }
    
};