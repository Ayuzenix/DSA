#include<bits/stdc++.h>
using namespace std ;

// Problem : Prime Subtraction Operation
// Platform : Leetcode 

class Solution {
public:

    int solve( int curr , int toCompare ) {
        int mini = -1 ;
        for ( int i = 2 ; i < curr ; i ++ ) {
              bool gama = true ;
              for ( int j = 2 ; j < i ; j ++ ) {
                  if ( i % j == 0 ) {
                      gama = false ;
                      break ;
                  }
              }
              if ( gama == true ) {
                  if ( ( curr - i ) < toCompare ) {
                      mini = i ;
                      break ;
                  }
              }
        }
        return mini ;
    }

    bool primeSubOperation(vector<int>& nums) {
         int n = nums.size() ;
         stack<int>st ;
         for ( int i = n - 1 ; i >= 0 ; i -- ) {
              if ( st.empty() ) {
                  st.push( nums[i] ) ;
              } else {
                  if ( nums[i] >= st.top() ) {
                      int curr = solve( nums[i] , st.top() ) ;
                      if ( curr == -1 ) {
                          return false ;
                      }
                      st.push( nums[i] - curr ) ;
                  } else {
                  st.push( nums[i] ) ;
                  }
              }
         }
         return true ;
    }
};
