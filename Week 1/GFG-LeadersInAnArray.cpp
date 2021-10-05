//  https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

//  TLE received

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> leaders;
        
        //int n = sizeof(a)/sizeof(a[0]);
        
        for(int i = 0 ; i < n ; i++){
            bool isGreater = true;
            
            for(int j = i + 1 ; j < n ; j++){
                if(a[i] < a[j]){
                    isGreater = false;
                }
            }
            
            if(isGreater == true){
                leaders.push_back(a[i]);
            }
        }
        
        return leaders;
    }
};

//  correct answer

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> revArr;
        int maximum = a[n-1];
        
        revArr.push_back(a[n-1]);
        for(int i = n - 2 ; i >= 0 ; i--){
            if(maximum <= a[i]){
                maximum = a[i];
                revArr.push_back(a[i]);
            }
        }
        
        vector<int> arr;
        
        for(int i = revArr.size() - 1 ; i >= 0 ; i--){
            arr.push_back(revArr[i]);
        }
        
        return arr;
    }
};