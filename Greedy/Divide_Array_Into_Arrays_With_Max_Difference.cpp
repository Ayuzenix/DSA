#include<bits/stdc++.h>
using namespace std ;

// Problem : Divide Array Into Arrays With Max Difference 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
         int n = nums.size() ;
         sort( nums.begin() , nums.end() ) ;
         vector<vector<int>>result ;
         int idx = 0 ;
         while ( idx < n ) {
             vector<int>store ;
             while ( idx < n && store.size() < 3 ) {
                 store.push_back( nums[idx] ) ;
                 idx ++ ;
             }
             if ( store.size() == 3 ) {
                  if ( ( store[2] - store[0] ) > k ) {
                       while ( !result.empty() )  {
                          result.pop_back() ;
                       }
                       return result ;
                  }
                  result.push_back( store ) ;
             }
         }
         return result ;
    }
};
