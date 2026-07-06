#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Value after Insertion 
// Platform : Leetcode 

class Solution {
public:
    string maxValue(string n, int x) {
        int m = n.size() ;
        string ans ="" ;
        if ( n[0] != '-' ) { // Logic for +ve Integers 
            int idx = -1 ;
            for ( int i = 0 ; i < m ; i ++ ) {
                 if ( ( n[i] - '0' ) < x ) {
                    idx = i ;
                    break ;
                 }
            }
            if ( idx == -1 ) {
                for ( int i = 0 ; i < m ; i ++ ) {
                    ans.push_back( n[i] ) ;
                }
                ans = ans + to_string( x ) ;
            } else {
                for ( int i = 0 ; i < m ; i ++ ) {
                    if ( i == idx ) {
                        ans = ans + to_string( x ) ;
                    }
                    ans.push_back( n[i] ) ;
                }
            }
        } else { // Logic for -ve Integers 
             int idx = -1  ;
            for ( int i = 0 ; i < m ; i ++ ) {
                 if ( i != 0 && ( n[i] - '0' ) > x ) {
                    idx = i ;
                    break ;
                 }
            }
            if ( idx == -1 ) {
                for ( int i = 0 ; i < m ; i ++ ) {
                    ans.push_back( n[i] ) ;
                }
                ans = ans + to_string( x ) ;
            } else {
                  for ( int i = 0 ; i < m ; i ++ ) {
                    if ( i == idx ) {
                        ans = ans + to_string( x ) ;
                    }
                    ans.push_back( n[i] ) ;
                }
            }
        }
        return ans ;
    }
};
