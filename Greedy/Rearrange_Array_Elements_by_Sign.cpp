#include<bits/stdc++.h>
using namespace std ;

// Problem : Rearrange Array Elements by Sign 
// Platform : Leetcode 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() , l = 0 , r = 0 ; // l for positive and r for negative 
        vector<int>store ;
        while ( nums[l] < 0 ) {
            l ++ ;
        }
        while ( nums[r] > 0 ) {
            r ++ ;
        }
        while ( l < n || r < n ) {
            if ( l < n ) {
            store.push_back( nums[l] ) ;
            }
            if ( r < n ) {
            store.push_back( nums[r] ) ;
            }
            l ++ , r ++ ;
            while ( l < n && nums[l] < 0 ) {
            l ++ ;
            }
            while ( r < n && nums[r] > 0 ) {
            r ++ ;
           }
        }
        return store ;
    }
};
