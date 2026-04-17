#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimize Maximum pair sum in Array 
// Platform : Leetcode 

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort ( nums.begin() , nums.end() ) ;
        vector<pair<int,int>>store ;
        int n = nums.size() , l = 0 , r = n - 1 ;
        while ( l < r ) {
            store.push_back( { nums[l] , nums[r] } ) ;
            l ++ ;
            r -- ;
        }
        int maxi = INT_MIN ;
        for( auto & it : store ) {
            maxi = max ( maxi , ( it.first + it.second ) ) ;
        }
        return maxi ;
    }
};
