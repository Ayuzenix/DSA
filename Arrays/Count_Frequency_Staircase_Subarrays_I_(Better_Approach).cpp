#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Frequency Staircase Subarrays I 
// Platform : Leetcode 
// Time Complexity : o( n^2 * root n ) 

class Solution {
public:
    
    int toCheck( unordered_map<int,int>&mp , vector<int>&store ) {
        int curr = 1 , ans = 1 ; 
        for ( int i = 0 ; i < store.size() - 1 ; i ++ ) {
            if ( mp[store[i]] == curr ) {
                curr ++ ; 
            } else {
                ans = 0 ;
                break ; 
            }
        }
        if ( ans == 0 ) {
            return 0 ; 
        } else {
            if ( mp[store[store.size()-1]] == curr ) {
                return 1 ; 
            } else {
                return 0 ; 
            }
        }
    }

    int countStaircase(vector<int>& nums) {
       int n = nums.size() ;
       int score = 0 ; 
       int curr = 0 ; 
       unordered_map<int,int>valid ; 
       for ( int i = 1 ; i <= 1500 ; i ++ ) {
            curr = ( curr + i ) ;
            valid[curr] ++ ; 
       }
       for ( int i = 0 ; i < n ; i ++ ) {
         unordered_map<int,int>mp ;
         vector<int>store ; 
         for ( int j = i ; j < n ; j ++ ) {
            int length = ( j - i + 1 ) ;
            if ( mp.find( nums[j] ) == mp.end() ) {
                store.push_back( nums[j] ) ;
            }
            mp[nums[j]] ++ ; 
            if ( valid.find( length ) != valid.end() ) {
            if ( toCheck( mp , store ) == 1 ) {
                score ++ ; 
            } else {
                continue ; 
            }
            }
         }
       }
       return score ; 
    }
};
