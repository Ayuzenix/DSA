#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the XOR of the Number which appears Twice 
// Platform : Leetcode 

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size() , result = 0 ;
        sort( nums.begin() , nums.end() ) ; 
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( nums[i] == nums[i-1] ){
                result = ( result ^ nums[i] ) ;
            } 
        }
        return result ;
    }
};
