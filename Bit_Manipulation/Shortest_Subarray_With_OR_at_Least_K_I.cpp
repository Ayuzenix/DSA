#include<bits/stdc++.h>
using namespace std ;

// Problem : Shortest Subarray With OR at Least K I 
// Platform : Leetcode 

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size() , mini = INT_MAX ;
        for ( int i = 0 ; i < n ; i ++ ) {
             int curr = 0 ;
             for ( int j = i ; j < n ; j ++ ) {
                 curr = ( curr | nums[j] ) ;
                 if ( curr >= k ) {
                     mini = min( mini , ( ( j - i + 1 ) ) ) ;
                 }
             }
        }
        if ( mini == INT_MAX ) {
             return -1 ;
        }
        return mini ;
    }
};
