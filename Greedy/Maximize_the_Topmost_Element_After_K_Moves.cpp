#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize the Topmost Element After K Moves
// Platform : Leetcode 

class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size() , i = 0 ;
        if ( k == 0 ) return nums[0] ;
        if ( n == 1 && k == 1 ) return -1 ;
        if ( k > n ) {
            if ( n == 1 ) {
                int rem = k - 1 ;
                if ( rem % 2 == 0 ) return -1 ;
                return nums[0] ;
            } else {
                return *max_element( nums.begin() , nums.end() ) ;
            }
        }
        priority_queue<int>pq ;
        while ( i < n  ) {
             if ( k == 1 ) {
                 break ;
             }
             pq.push( nums[i] ) ;
             k -- ;
             i ++ ;
        }
        if ( pq.empty() ) {
            if ( k == 1 ) {
                if ( i < n - 1 ) {
                return  nums[i+1]  ;
                }
                return -1 ;
            }
            if ( i < n )  {
            return nums[i] ;
            }
            return -1 ;
        } else {
            if ( k == 1 ) {
                if ( i < n - 1 ) {
                int gama = nums[i+1] ;
                return max( gama , pq.top() ) ;
                }
                return pq.top() ;
            }
            if ( i < n ) {
            return nums[i] ;
            }
            return pq.top() ;
        }
        return -1 ;
    }
};
