#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Deletions to Make Array Beautiful 
// Platform : Leetcode 

class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>store ;
        int count = 0 ;
        for ( int i = 0 ; i < n  ; i ++ ) {
             if( store.size() % 2 != 0 ) {
                 if ( !store.empty() && store.back() == nums[i] ) {
                     store.pop_back() ;
                     store.push_back( nums[i] ) ;
                     count ++ ;
                 } else {
                    store.push_back( nums[i] ) ;
                 }
             } else {
                store.push_back( nums[i] ) ;
             }
        }
        if ( store.size() % 2 != 0 ) {
             return count + 1 ;
        }
        return count ;
    }
};
