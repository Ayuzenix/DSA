#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Swaps to Make the Binary String Alternating 
// Platform : Leetcode

class Solution {
public:

    int toCount ( string s , char a , char b ) {
        string result = "" ;
        result = result + a ;
        for ( int i = 1 ; i < s.size() ; i ++ ) { 
             if ( s[i] == result.back() ) {
                 if ( result.back() == a ) {
                     result = result + b ;
                 } else {
                     result = result + a ;
                 }
             } else {
                result = result + s[i] ;
             }
        }
        int toRequired = 0 , c11 = 0 , c10 = 0 , c00 = 0 , c01 = 0 ;
        for ( int i = 0 ; i < s.size() ; i ++ ) {
             if ( s[i] != result[i] ) {
                 toRequired ++ ;
             }
             if ( s[i] == '0' ) {
                 c00 ++ ;
             }else if ( s[i] == '1' ) {
                 c01 ++ ;
             }
             if ( result[i] == '0' ) {
                 c10 ++ ;
             } else if ( result[i] == '1' ) {
                 c11 ++ ;
             }
        }
        if ( c00 != c10 || c01 != c11 ) return INT_MAX ;
        return ( toRequired / 2 ) ;
    }

    int minSwaps(string s) {
        int n = s.size() , countOnes = 0 , countZeros = 0 ;
        if (  n == 1 ) return 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( s[i] == '0' ) {
                 countZeros ++ ;
             } else {
                 countOnes ++ ;
             }
        }
        if ( abs( countOnes - countZeros ) >= 2 ) { // in Case of odd 
            return -1 ;
        }
        int mini1 = toCount( s , '1' , '0' ) ; 
        int mini2 = toCount( s , '0' , '1' ) ;
        return min( mini1 , mini2 ) ;
    }
};
