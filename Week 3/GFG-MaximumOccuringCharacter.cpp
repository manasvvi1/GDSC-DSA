//  https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1#

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] = {0};
        int maximum = INT_MIN;
        
        for(int i = 0 ; i < str.length() ; i++){
            arr[str[i] - 'a']++;
            maximum = max(maximum, arr[str[i]-'a']);
        }
        
        for(int i = 0 ; i < 26 ; i++){
            if(maximum == arr[i]){
                return (i + 'a');
            }
        }
        
    }

};