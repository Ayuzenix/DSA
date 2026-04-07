#include<bits/stdc++.h>
using namespace std ;

// Problem : Integer with Multiple Sum of Two Cubes 
// Platform : Leetcode 

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
         vector<int> store ; 
         unordered_map<int,int>mp; 
         int count = 0 ;
         for ( int i = 1 ; i <=1000 ; i ++ ) {
               int a = i * i * i ;
              for ( int j = 1 ; j <= 1000 ; j ++ ) {
                int b = j * j * j ;
                int x = a + b ;
                if ( x <= n ) {
                    mp[x] ++ ;
                }
              }
         }
         for ( auto & it : mp ) {
              if ( it.second > 2 ) {
                store.push_back( it.first ) ;
              }
         }
         sort ( store.begin() , store.end() ) ;
         return store ;
    }
};
