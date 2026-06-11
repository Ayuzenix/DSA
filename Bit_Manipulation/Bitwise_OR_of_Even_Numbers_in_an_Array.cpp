#include<bits/stdc++.h>
using namespace std ;

// Problem : Bitwise OR of Even Numbers in an Array 
// Platform : Leetcode 

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int curr = 0 ;
        for  ( int i = 0 ; i < nums.size() ; i ++ ) {
              if ( ( nums[i] & 1 ) == 0 ) {
                 curr = ( curr | nums[i] ) ;
              }
        } 
        return curr ;
    }
};
