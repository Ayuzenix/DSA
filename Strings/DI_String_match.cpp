#include<bits/stdc++.h>
using namespace std ;

// Problem : DI String match 
// Platform : Leetcode 

class Solution {
public:
    vector<int> diStringMatch(string s) {
         int n = s.size() ;
         vector<int>result ;
         int l = 0 , r = n ; 
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( s[i] == 'I') {
                  result.push_back(l++) ;
              } else if ( s[i] == 'D' ) {
                  result.push_back(r--) ;
              }
         }
         if ( s[n-1] =='I' ) {
             result.push_back(l) ;
         } else if ( s[n-1] =='D' ) {
             result.push_back(r) ;
         }
         return result ;
    }
};
