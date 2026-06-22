#include<bits/stdc++.h>
using namespace std ;

// Problem : 3Sum Closest 
// Platform : Leetcode 

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        int prev = -1 , ans ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int l = i + 1 , r = n - 1 ;
            while ( l < r ) {
                int curr = nums[i] + nums[l] + nums[r] ;
                if ( curr == target ) {
                    return target ;
                } else if ( curr > target ) {
                    int diff = curr - target ;
                    if ( prev == -1  ) {
                        prev = diff ;
                        ans = curr ;
                    } else {
                        if ( diff < prev ) {
                            ans = curr ;
                            prev = diff ;
                        }
                    }
                    r -- ;
                } else {
                    int diff = target - curr ;
                    if ( prev == -1 ) {
                        prev = diff ;
                        ans = curr ;
                    } else {
                        if ( diff < prev ) {
                            ans = curr ;
                            prev = diff ;
                        }
                    }
                    l ++ ;
                }
            }
        }
        return ans ;
    }
};
