#include<bits/stdc++.h>
using namespace std ;

// Problem : Divide Array in Sets of K Consecutive Numbers 
// Platform : Leetcode 

class Solution {
public:

    bool toCheck( vector<int>curr ) {
        for ( int i = 1 ; i < curr.size() ; i ++ ) {
             if ( curr[i] - curr[i-1] != 1 ) return false ;
        }
        return true ;
    }

    bool isPossibleDivide(vector<int>& nums, int k) {
         int n = nums.size() ;
         unordered_map<int,int>mp ;
         for ( int i = 0 ; i < n ; i ++ ) {
              mp[nums[i]] ++ ;
         } 
         vector<int>store ;
         for ( auto &it:mp ) {
              store.push_back( it.first ) ;
         }
         sort( store.begin() , store.end() ) ;
         int i = 0 ;
         while ( i < store.size() ){
            int idx = -1 ;
            vector<int>curr ;
            while ( i < store.size() && curr.size() < k ) {
                if ( mp[store[i]] > 0 ) {
                curr.push_back( store[i] ) ;
                mp[store[i]] -- ;
                }
                if ( mp[store[i]] > 0 && idx == -1 ) {
                    idx = i ;
                }
                i ++ ;
            }
            if ( toCheck( curr ) == false || curr.size() != k ) {
                return false ;
            }
            if ( idx != -1 ) {
                i = idx ;
            } 
         }
         return true ;
    }
};
