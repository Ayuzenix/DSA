#include<bits/stdc++.h>
using namespace std ;

// Problem : Split With Minimum Sum 
// Platform : Leetcode 

class Solution {
public:
    int splitNum(int num) {
        string str = to_string( num ) ;
        sort( str.begin() , str.end() ) ;
        string first = "" , second = "" ;
        int l = 0 , r = 1 , n = str.size() ;
        while ( l < n ) {
            if ( str[l] != '0' ) {
                first = first + str[l] ;
            } 
             l = l + 2 ;
        }
        while ( r < n ) {
            if ( str[r] != '0' ) {
                second = second + str[r] ;
            }
            r = r + 2 ;
        }
        int num1 , num2 ; 
        if ( first != "") {
            num1 = stoi( first ) ;
        } else {
            num1 = 0 ;
        }
        if ( second != "") {
            num2 = stoi( second ) ;
        } else {
            num2 = 0 ;
        }
        return ( num1 + num2 ) ;
    }
};
