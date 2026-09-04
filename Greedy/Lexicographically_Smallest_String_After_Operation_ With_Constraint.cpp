#include<bits/stdc++.h>
using namespace std ;

// Problem : Lexicographically Smallest String After Operations With Constraint
// Platform : Leetcode 

class Solution {
public:
    string getSmallestString(string s, int k) {
        int n = s.size() ;
        string str = "" ;
        int idx = 0 ;
        while ( idx < n ) {
            char curr = s[idx] ;
            for ( char ch = 'a' ; ch <= s[idx] ; ch ++ ) {
                 int leftside = ( ( s[idx] - 'a' ) - ( ch - 'a' ) ) ; // Between them 
                 int rightside = 26 - leftside ; // Apart from Between them 
                 if ( ( leftside <= k || rightside <= k ) && ch < curr ) {
                     curr = ch ;
                 }
            }
            str = str + curr ;
            int leftside = ( ( s[idx] - 'a' ) - ( curr - 'a' ) ) ; 
            int rightside = 26 - leftside ;
            int mini = min( leftside , rightside ) ;
            k = k - mini ;
            idx ++ ;
        }
        return str ;
    }
};
