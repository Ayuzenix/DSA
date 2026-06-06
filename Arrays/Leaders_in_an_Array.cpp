#include<bits/stdc++.h>
using namespace std ;

// Problem : Leaders in an Array 
// Platform : TakeUForword 

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
          int n = nums.size() ;
          int maxi = INT_MIN ;
          vector<int>result ;
          for ( int i = n - 1 ; i>= 0 ; i -- ) {
               if ( nums[i] > maxi ) {
                   result.push_back( nums[i] ) ;
                   maxi = nums[i] ;
               }
          }
          reverse( result.begin() , result.end() ) ;
          return result ;
    }
};
