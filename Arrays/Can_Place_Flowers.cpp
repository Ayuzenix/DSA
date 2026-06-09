#include<bits/stdc++.h>
using namespace std ;

// Problem : Can Place Flowers 
// Platform : Leetcode 

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int count = 0 , m = flowerbed.size() ;
         if ( m == 1 ) {
             if ( n == 0 || ( n == 1 && flowerbed[0] == 0 ) ) {
                 return true ;
             }
             return false ;
         }
         if ( m >= 2 ) {
             if ( flowerbed[1] == 0 && flowerbed[0] == 0 ) {
                 flowerbed[0] = 1 ;
                 count ++ ;
             }
             if ( flowerbed[m-1] == 0 && flowerbed[m-2] == 0 ) {
                 flowerbed[m-1] = 1 ;
                 count ++ ;
             }
             if ( count >= n ) {
                return true ;
             }
         }
         for ( int i = 1 ; i < m - 1 ; i ++ ) {
              if ( flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ) {
                  flowerbed[i] = 1 ;
                  count ++ ;
              }
              if ( count >= n ) {
                 return true ;
              }
         }
         if ( count >= n ) {
                return true ;
         }
         return false ;
    }
};
