#include<bits/stdc++.h>
using namespace std ; 

// Problem : Non-decreasing Array 
// Platform : Leetcode 

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size() , count = 0 , idx = -1 ; 
        for ( int i = 1 ; i < n ; i ++ ) {
             if ( nums[i] < nums[i-1] ) {
                 count ++ ;
                 idx = i ;
             }
        }
        if ( count >=2 ) {
            return false ; 
        }
        if ( count == 1 ) {
            if ( idx < n - 1 ) {
                if ( nums[idx-1] <= nums[idx+1] ) {
                    return true ;
                } else { // nums[idx-1] > nums[idx+1] 
                   if ( ( idx - 1 ) == 0 ) {
                       return true ; 
                   } else { 
                       if ( nums[idx-2] > nums[idx] ) {
                           return false ; 
                       } else {
                        return true ; 
                       }
                   }
                }
            }
        }
        return true ; 
    }
};
