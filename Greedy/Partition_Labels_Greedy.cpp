#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition Labels 
// Platform : Leetcode 

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp ;
        int n = s.size() ;
        for ( int i = 0 ; i < n ; i ++ ) {
            mp[s[i]] = i ;
        }
        vector<int>store ;
        int i = 0 ;
        while ( i < n ) {
            int l = i , r = mp[s[i]] , maxi = r ;
            while ( l < maxi ) {
            maxi = max( maxi , mp[s[l]] ) ;
            l ++ ;
            }
            store.push_back( maxi - i + 1 ) ;
            i = maxi + 1 ;
        }
        return store ;
    }
};
