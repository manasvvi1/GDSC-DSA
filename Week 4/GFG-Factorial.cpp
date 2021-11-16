//  https://practice.geeksforgeeks.org/problems/factorial5739/1#

long long int factorial(int n){
    if(n<=1){
        return 1;
    }

    return n*factorial(n-1);
}