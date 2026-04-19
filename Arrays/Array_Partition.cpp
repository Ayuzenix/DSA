#include<bits/stdc++.h>
using namespace std ;

// Problem : Array Partition 
// Platform : Leetcode 

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size() ;
        sort ( nums.begin() , nums.end() ) ;
        int l = 0 ;
        int r =1 ;  
        vector<pair<int,int>>store ;
        while ( r < n  && l < n ) {
            store.push_back({ nums[l] , nums[r] } ) ;
            l = l + 2 ;
            r = r + 2 ;
        }
        int maxi = 0 ;
        for ( auto & it : store  ) {
            maxi = maxi + min ( it.first , it.second ) ;
        }
        return maxi ;
    }
};
