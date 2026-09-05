#include<bits/stdc++.h>
using namespace std ;

// Problem : Reach End of Array With Max Score 
// Platform : Leetcode 

class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
         int n = nums.size() ;
         vector<int>store ( n ) ;
         store[n-1] = n - 1 ; 
         int l = 0 , r = 0 ;
         while ( r < n ) {
            while ( r < n && nums[r] <= nums[l] ) {
                   r ++ ;
            }
            if ( r == n ) {
                store[l] = n - 1 ; 
                break ;
            }
            store[l] = r ;
            l = r ;
         }
         
         long long totalScore = 0 , i = 0 ;
         while ( i < n - 1 ) {
             totalScore = totalScore + ( long long )( ( store[i] - i ) * nums[i] ) ;
             i = store[i] ;
         }
         return totalScore ;
    }
};
