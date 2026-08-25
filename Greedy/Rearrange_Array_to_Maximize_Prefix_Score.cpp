#include<bits/stdc++.h>
using namespace std ;

// Problem : Rearrange Array to Maximize Prefix Score 
// Platform : Leetcode 

class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n = nums.size() , count = 0 ;
        sort( nums.rbegin() , nums.rend() ) ;
        vector<long long>store( nums.begin() , nums.end() ) ;
        for ( int i = 1 ; i < n ; i ++ ) {
             store[i] = ( store[i] + store[i-1] ) ;
        }
        long long curr = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             curr = curr + store[i] ;
             if ( curr >= 0 ) {
                 if ( store[i] > 0 ) {
                     count ++ ;
                 }
             } else {
                break ;
             }
        }
        return count ;
    }
};
