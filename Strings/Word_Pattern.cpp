#include<bits/stdc++.h>
using namespace std ;

// Problem : Word Pattern 
// Platform : Leetcode 

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp ; 
        string str = "" ;
        int r = 0 ;
        vector<string>result ; 
        for ( int i = 0 ; i < s.size() ; i ++ ) {
             if ( s[i] == ' ' ) {
                 result.push_back( str ) ;
                 str = "" ;
             } else {
                str = str + s[i] ;
             }
        }
        if ( str != "" ) {
            result.push_back( str ) ;
        }
        if ( result.size() != pattern.size() ) {
            return false ;
        }
        while ( r < pattern.size() ) {
            if ( mp.find( pattern[r] ) == mp.end() ) {
                mp[pattern[r]] = result[r] ;
            } else {
                if ( mp[pattern[r]] != result[r] ) {
                    return false ;
                }
                mp[pattern[r]] = result[r] ;
            }
            r ++ ;
        }
        r = 0 ; 
        unordered_map<string,char>mpf ; 
         while ( r < pattern.size() ) {
            if ( mpf.find( result[r] ) == mpf.end() ) {
                mpf[result[r]] = pattern[r] ;
            } else {
                if ( mpf[result[r]] != pattern[r] ) {
                    return false ;
                }
                mpf[result[r]] = pattern[r] ;
            }
            r ++ ;
        }
        return true; 
    }
};
