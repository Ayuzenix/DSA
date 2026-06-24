#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Sum of At Most K Distinct Elements 
// Platform : Leetcode 

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort( nums.begin() , nums.end() ) ;
        int n = nums.size() , count = 0 , r = n-1 , prev = -1 ;
        vector<int>store ;
        while ( r >= 0 ) {
            if ( count == k ) {
                break ;
            }
            if ( nums[r] != prev ) {
                store.push_back( nums[r] ) ;
                count ++ ;
                prev = nums[r] ;
            }
            r -- ;
        }
        return store ;
    }
};
