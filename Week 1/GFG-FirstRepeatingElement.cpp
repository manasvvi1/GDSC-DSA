//  https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int count[1000001] = {0};
        int repeated;
        
        for(int i = 0 ; i < n ; i++){
            count[arr[i]]++;
        }
        
        for(int i = 0 ; i < n ; i++){
            if(count[arr[i]] >= 2){
                return i+1;
            }
        }
        
        return -1;
    }
};