#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Deletions for At Most K Distinct Characters 
// Platform : Leetcode 

class Solution {
public:
    int minDeletion(string s, int k) {
        int n = s.size() ;
        unordered_map<char,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
            mp[s[i]] ++ ;
        }
        vector<pair<char,int>>store ;
        for ( auto & it: mp ) {
            store.push_back( { it.first , it.second} ) ;
        }
        sort( store.begin() , store.end() , [] ( auto &a , auto & b ) {
           return b.second > a.second ;
        } ) ;
        int curr = store.size() , count = 0 ;
        for ( auto & it: store ) {
            int x = it.second ;
            while ( x > 0 && ( curr > k ) ) {
                x -- ;
                if ( x == 0 ) {
                    curr -- ;
                }
                count ++ ;
                if ( curr <= k ) {
                    break ;
                }
            }
            if ( curr <= k ) {
                break ;
            }
        }
        return count ;
    }
};
