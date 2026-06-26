#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Difference by Remapping a Digit
// Platform : Leetcode 

class Solution {
public:
    int minMaxDifference(int num) {
        vector<int>store ;
        while ( num > 0 ) {
            int x = num % 10 ;
            store.push_back( x ) ;
            num = num / 10 ;
        }
        int n = store.size() , leftmost = store[n-1] , num1 = 0 , num2 = 0 ;
        if( leftmost == 9 ) {
            int sleft = -1 ;
            for ( int i = n - 1 ; i >= 0 ; i -- ) {
                if ( store[i] != leftmost ) {
                    sleft = store[i] ;
                    break ;
                }
            }
            int pow1 = 1 , pow2 = 1 ;
            for ( int i = 0 ; i < n ; i ++ ) {
                if ( store[i] == sleft ) {
                    num1 = num1 + ( 9 * pow1 ) ;
                    pow1 = pow1 * 10 ;
                } else {
                    num1 =num1 + ( store[i] * pow1) ;
                    pow1 = pow1 * 10 ; 
                 }
                 if ( store[i] == leftmost ) {
                    num2 = num2 + ( 0 * pow2) ;
                    pow2 = pow2 * 10 ;
                 } else {
                    num2 = num2 + ( store[i] * pow2) ;
                    pow2 = pow2 * 10 ;
                 }
            }
        } else {
           int pow1 = 1 , pow2 = 1 ;
            for ( int i = 0 ; i < n ; i ++ ) {
                if ( store[i] == leftmost ) {
                    num1 = num1 + ( 9 * pow1 ) ;
                    pow1 = pow1 * 10 ;
                } else {
                    num1 =num1 + ( store[i] * pow1) ;
                    pow1 = pow1 * 10 ; 
                 }
                 if ( store[i] == leftmost ) {
                    num2 = num2 + ( 0 * pow2) ;
                    pow2 = pow2 * 10 ;
                 } else {
                    num2 = num2 + ( store[i] * pow2) ;
                    pow2 = pow2 * 10 ;
                 }
            } 
        }
        return ( num1 - num2 ) ;
    } 
};
