#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition String Into Substrings With Values at Most K 
// Platform : Leetcode 

class Solution {
public:
    int minimumPartition(string s, int k) {
        int n = s.size() ;
        // Scenario 1 -->>>>  Handling not Possible 
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( ( s[i] - '0' ) > k ) {
                 return -1 ;
             }
        }
        // Scenario 2 -->>>> Handling is Possible 
        string str = "" ;
        int totalSubstring = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             str.push_back( s[i] ) ;
             long long curr = stoll( str ) ;
             if ( curr > k ) {
                 str = "" ;
                 str.push_back( s[i] ) ;
                 totalSubstring ++ ; 
             } 
        }
        if ( stoll( str ) > k ) {
            totalSubstring = totalSubstring + 2 ;
        } else {
            totalSubstring ++ ;
        }
        return totalSubstring ;
    }
};
