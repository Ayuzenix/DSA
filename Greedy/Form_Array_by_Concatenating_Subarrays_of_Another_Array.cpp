#include<bits/stdc++.h>
using namespace std ;

// Problem : Form Array by Concatenating Subarrays of Another Array 
// Platform : Leetcode

class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
         int n = groups.size() , m = nums.size() , j = n - 1 , i = m - 1 ;
         stack<int>st ;
         while ( i >= 0 && j >= 0  ) {
              if ( st.size() == groups[j].size() ) {
                  vector<int>store ;
                  while ( !st.empty() ) {
                         store.push_back( st.top() ) ;
                         st.pop() ;
                  }
                  if ( store == groups[j] ) {
                      j -- ;
                  } else {
                     for ( int k = store.size() - 2 ; k >= 0 ; k -- ) {
                          st.push( store[k] ) ;
                     }
                  }
              } else {
                st.push( nums[i] ) ;
                i -- ;
              }
         }
         if ( i < 0 ) {
               vector<int>store ;
                  while ( !st.empty() ) {
                         store.push_back( st.top() ) ;
                         st.pop() ;
                  }
                  if ( store == groups[j] ) {
                      j -- ;
                  }
         }
         if ( j >= 0 ) {
             return false ;
         }
         return true ;
    }
};
