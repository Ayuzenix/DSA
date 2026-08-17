#include<bits/stdc++.h>
using namespace std ;

// Problem : Removing Minimum Number of Magic Beans 
// Platform : Leetcode 

class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
         int n = beans.size() ;
         sort( beans.begin() , beans.end() ) ; 
         vector<long long>store( n ) ; // long long type of Vector to Prevent from Integer Overflow 
         vector<long long>fromlast( n ) ;
         long long sum = 0 , last = 0 , prev = -1 ;
         for ( int i = 0 ; i < n ; i ++ ) {
              store[i] = sum ;
              sum = sum + beans[i] ;
         }
         for ( int i = n - 1 ; i >= 0 ; i -- ) {
              if ( i == n - 1 ) {
                  fromlast[i] = last ;
              } else {
                  long long x = ( ( n - 1 ) - i ) ;
                  long long y = ( ( beans[i+1] - beans[i] ) ) ;
                  last = last + ( x * y ) ;
                  fromlast[i] = last ;
              }
         }
         long long minBeanRequired = LLONG_MAX ; // as answer is exceeding INT_MAX 
         for ( int i = 0 ; i < n ; i ++ ) {
             minBeanRequired = min( minBeanRequired , store[i] + fromlast[i] ) ;
         }
         return minBeanRequired ;
    }
};
