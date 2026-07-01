#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Operation Required to Make Array Empty 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(vector<int>& nums) {
         int n = nums.size() , MinOperationRequired = 0 ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[nums[i]] ++ ;
        }
        for ( auto &it:mp ) {
            int x = it.second ;
            int check = x % 3 ;
            if ( check % 2 != 0 ) { 
                int curr = x ;
                while ( curr > 0 ) {
                     if ( curr % 3 == 0 ) {
                        MinOperationRequired = MinOperationRequired + ( curr / 3 ) ;
                        curr = 0 ;
                     } else {
                        curr = curr - 2 ;
                        MinOperationRequired = MinOperationRequired + 1 ;
                     }
                }
                if ( curr != 0 ) {
                    return -1 ;
                }
                }else {
                MinOperationRequired = MinOperationRequired + ( x / 3 ) ;
                MinOperationRequired = MinOperationRequired + ( check / 2 ) ;
            }
    }
        return MinOperationRequired ;
    }
};
