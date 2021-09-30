//  https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        int temp[d];
        
        while(d >= n){
            d -= n;
        }
        
        for(int i = 0 ; i < d ; i++){
            temp[i] = arr[i];
        }
        
        for(int i = d ; i < n ; i++){
            arr[i-d] = arr[i];
        }
        
        for(int i = 0 ; i < d ; i++){
            arr[n - d  + i] = temp[i];
        }
    }
};