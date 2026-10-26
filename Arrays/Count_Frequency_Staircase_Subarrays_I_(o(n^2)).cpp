#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Frequency Staircase Subarrays I 
// Platform : Leetcode 
// Time Complexity : o( n^2 ) 

class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size() , score = 0 ; 
        unordered_map<int,int>check ;
        int curr = 0 ; 
        for ( int i = 1 ; i <= 1500 ; i ++ ) {
             curr = ( curr + i ) ;
             check[curr] = i ; // length corresponds to rank 
        }
        for ( int i = 0 ; i < n ; i ++ ) {
            unordered_map<int,int>mp ; 
            unordered_map<int,int>rank ;
            for ( int j = i ; j < n ; j ++ ) {
                 if ( mp.find( nums[j] ) == mp.end() ) {
                     int x = rank.size() ;
                     rank[nums[j]] = x + 1 ; 
                 }
                 mp[nums[j]] ++ ;
                 if ( mp[nums[j]] > rank[nums[j]] ) {
                    break ; 
                 } else {
                    int length = ( j - i + 1 ) ;
                    if ( check.find( length ) != check.end() ) {
                        int prevRank = check[length] ; 
                        if ( rank.size() == prevRank ) {
                            score ++ ;
                        }
                    }
                 }
            }
        }
        return score ; 
    }
};
