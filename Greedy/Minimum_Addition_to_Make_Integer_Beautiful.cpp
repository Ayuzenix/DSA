#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Addition to Make Integer Beautiful 
// Platform : Leetcode 

class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
         string str = to_string( n ) ;
         long long m = str.size() , sum = 0 ;
         for ( int i = 0 ; i < m ; i ++ ) {
               sum = sum + ( str[i] - '0' ) ;
         }
         if ( sum <= target ) {
             return 0 ;
         }
         for ( int i = m - 1 ; i > 0 ; i -- ) {
               if ( sum <= target ) {
                  break ;
               }
               sum = sum - ( str[i] - '0' ) ;
               str[i] = '0' ; 
            //    int next = ( ( str[i-1] - '0' ) + 1 ) % 10 ;
            //    str[i-1] = ( next + '0' ) ;
               int j = i - 1 ; 
               while ( j >= 0 && str[j] == '9' ) {
                   str[j] = '0' ;
                   sum = sum - 9 ;
                   j -- ;
               }
               if ( j >= 0 ) {
                 int curr = ( str[j] - '0' ) + 1 ;
                 str[j] = ( curr + '0' ) ;
                 sum ++ ;
               } else {
                str = '1' + str ;
                sum ++ ;
               }
         }
         if ( sum > target ) {
             str[0] = '0' ;
             str = '1' + str ;
         }
         long long number = stoll( str ) ;
         return ( number - n ) ;
    }
};
