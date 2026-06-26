#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Sum With Exactly K Elements  
// Platform : Leetcode 

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size() , maxi = *max_element( nums.begin() , nums.end() ) ;
        int curr = 0 ;
        for ( int i = 1 ; i <= k ; i ++ ) {
         curr = curr + maxi ;
         maxi ++ ;
        }
        return curr ;
    }
};
