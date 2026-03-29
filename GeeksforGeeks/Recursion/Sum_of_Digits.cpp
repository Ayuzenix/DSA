#include<bits/stdc++.h>
using namespace std;

// Problem : Sum of Digits 
// Platform : GeeksforGeeks

class Solution {
  public:
    int solve ( int n , int sum ){
        
        if ( n == 0 ){
            return sum ;
        }
        int rem  = n % 10 ;
        sum = sum + rem ;
        return solve ( n / 10 , sum );
    }

    int sumOfDigits(int n) {
        int sum = 0 ;
        int ans = solve( n , sum ) ;
        return ans ;
        
    }
};
