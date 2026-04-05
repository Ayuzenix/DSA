#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest nice Substring 
// Platform : Leetcode 
// Approach : Brute force 

class Solution {
public: 
    bool toCheck( string str ) {
          int m = str.size() ;
          unordered_map<char,int> mp ;
          for ( int i = 0 ; i < m ; i ++ ) {
                mp [ str[i] ] ++ ;
          }
          for ( int i = 0 ; i < m ; i ++ ) {
               if ( str[i]>='a' && str[i]<='z') {
                   if ( mp.find(toupper(str[i])) == mp.end() ) {
                    return false ;
                   }
               }
               if ( str[i]>='A' && str[i] <='Z' ) {
                if ( mp.find(tolower(str[i])) == mp.end() ) {
                    return false ;
                }
               }
          }
          return true ;
    }
    string longestNiceSubstring(string s) {
           
           int n = s.size() ;
           string ans = "" ;
           for ( int i = 0 ; i < n ; i ++ ) {
                string str = "" ;
                for ( int j = i ; j < n ; j ++ ) {
                     str = str + s[j] ;
                     if ( toCheck( str ) == true ) {
                         if( str.size() > ans.size() ) {
                            ans = str ;
                         }
                     }
                }
           }
           return ans ;
    }  
};
