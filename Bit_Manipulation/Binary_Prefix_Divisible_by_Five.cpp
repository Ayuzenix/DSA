#include<bits/stdc++.h>
using namespace std ;

// Problem : Binary Prefix Divisible by 5 
// Platform : Leetcode 

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
          int n = nums.size() ;
          vector<bool>store (n) ;
          int curr = 0 ;
          for ( int i = 0 ; i < nums.size() ; i ++ ) {
              curr = ( curr * 2 + nums [i] ) % 5 ;
              store[i] = ( curr == 0 ) ;
          }
          return store ;
    }
};
