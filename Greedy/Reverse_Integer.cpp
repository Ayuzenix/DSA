#include<bits/stdc++.h>
using namespace std ;

// Problem : Reverse Integer 
// Platform : Leetcode 

class Solution {
public:
    int reverse(int x) { 
        string str = to_string( x ) ;
        if ( str[0] != '-' ) {
            std::reverse( str.begin() , str.end() ) ;
        } else {
            std::reverse( str.begin() + 1 , str.end() ) ;
        }
        if ( stoll( str) > INT_MAX || stoll( str) < INT_MIN ) {
            return 0 ;
        }
        return stoll( str ) ;
    }
};
