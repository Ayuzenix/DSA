#include<bits/stdc++.h>
using namespace std ;

// Problem : Optimal Partition of String 
// Platform : Leetcode 

class Solution {
public:
    int partitionString(string s) {
        int n = s.size() , l = 0 , r = 0 , count = 0 ;
        unordered_map<int,int>mp ;
        while ( r  < n ) {
            mp[s[r]] ++ ;
            if ( mp[s[r]] > 1 ) {
               while ( l < r ) {
                  mp[s[l]] -- ;
                  l ++ ;
               }
               count ++ ;
            }
            r ++ ;
        }
        count = count + 1 ;
        return count ;
    }
};
