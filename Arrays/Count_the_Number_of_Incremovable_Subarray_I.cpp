#include<bits/stdc++.h>
using namespace std ;

// Problem : Count the Number of Incremovable Subarrays I 
// Platform : Leetcode 

class Solution {
public: // Brute Force Solution ( Need to find Optimal Solution in-Future )
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size() , count = 0 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             for ( int j =  i ; j < n ; j ++ ) {
                  vector<int>store ;
                  for ( int k = 0 ; k < n ; k ++ ) { 
                       if ( k < i || k > j ) {
                           store.push_back( nums[k] ) ;
                       }
                  }
                  bool gama = true ;
                  for ( int k = 1 ; k < store.size() ; k ++ ) { 
                       if ( store[k] <= store[k-1]) { 
                           gama = false ;
                           break ;
                       }
                  }
                  if ( gama == true ) { 
                      count ++ ;
                  }
             }
        }
        return count ;
    }
}; 
