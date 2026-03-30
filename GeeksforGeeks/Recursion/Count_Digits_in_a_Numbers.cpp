#include<bits/stdc++.h>
using namespace std;

// Problem : Count Digits in a Number 
// Platform : Leetcode 

class Solution {
  public:
  
    int solve ( int n , int & sum ) {
         
        if ( n == 0 ) {
             return sum ;
        }
        
        sum ++ ;
        
        n = n / 10 ;
        
        return solve ( n , sum ) ;
         
    }
        
        
  
    int countDigits(int n) {
        
        int sum = 0 ;
        solve ( n , sum ) ;
        return sum ;
        
    }
};
