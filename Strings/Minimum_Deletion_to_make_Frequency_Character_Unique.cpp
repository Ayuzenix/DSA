#include<bits/stdc++.h>
using namespace std ; 

// Problem : Minimum Deletion to Make Freq char unique 
// Platform : Leetcode 

class Solution {
public:
    int minDeletions(string s) {
        int n = s.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
            mp[s[i]] ++ ;
        }
        vector<int>store ;
        for ( auto & it : mp ) {
            store.push_back( it.second ) ;
        }
        sort ( store.begin() , store.end() ) ;
        reverse ( store.begin() , store.end() ) ;
        int count = 0 ; 
        for ( int i = 1 ; i < store.size() ; i ++ ) {
                    while ( store[i] > 0 && store[i] >= store[i-1] ) {
                        count ++ ;
                        store[i] -- ;
                    }
        }
        return count ;
    }
};
