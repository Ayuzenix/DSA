#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Beauty of an array after applying Operation
// Platform : Leetcode 

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size() ;
        vector<pair<int,int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int x = nums[i] - k ;
            store.push_back( { x , + 1 } ) ;
            int y = nums[i] + k + 1 ;
            store.push_back( { y , -1 } ) ;
        }
        sort ( store.begin() , store.end() ) ;
        int count = 0 , maxi = 0 ;
        for  ( auto & it : store ) {
            count = count + it.second ;
            maxi = max( count , maxi ) ;
         }
         return maxi ;
    }
};

