#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operation to Transform Array into Alternating Prime 
// Platform : Leetcode 

class Solution {
public:

    bool isPrime( int x ) {
         if ( x == 1 ) {
                  return false ; 
              }
         for ( int i = 2 ; ( i * i ) <= x ; i ++ ) {
              if ( ( x % i ) == 0 ) {
                  return false ; // Number is not Prime 
              }
         }
         return true ; // Number is  an Prime 
    }

    int minOperations(vector<int>& nums) {
        long long n = nums.size() ;
        long long totalScore = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             long long curr = nums[i] ;
             if ( curr == 1 ) {
                 if ( i % 2 == 0 ) {
                    totalScore = totalScore + 1 ; 
                 }
             } else {
                if ( i % 2 == 0 ) {
                    while ( isPrime( curr ) == false ) {
                        curr ++ ; 
                    }
                    totalScore = totalScore + ( curr - nums[i] ) ;
                } else {
                    while ( isPrime( curr ) == true ) {
                        curr ++ ; 
                    }
                    totalScore = totalScore + ( curr - nums[i] ) ;
                }
             }
        }
        return totalScore ; 
    }
};
