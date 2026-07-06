#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Adjacent Swaps to Reach the Kth Smallest Number
// Platform : Leetcode 

class Solution {
public:
    int getMinSwaps(string num, int k) {
        int n = num.size() , count = 0 , curr = 0 , idx ;
        string prev = num ;
         while ( curr != k  ) {
            int from = -1 , till = -1 ;
           for ( int i = n - 1 ; i > 0 ; i -- ) {
              if ( num[i] > num[i-1] ) {
                idx = i ;
                break ;
              }
         }
           int mini = idx ;
           for ( int i = idx ; i < n ; i ++ ) {
              if ( num[i] > num[idx-1] && num[i] < num[mini] ) {
                 mini = i ;
              }
           }
           swap( num[idx-1] , num[mini] ) ;
           sort( num.begin() + idx  , num.end() ) ;
            curr ++ ;
         } 
         for ( int i = 0 ; i < n ; i ++ ) {
            if ( num[i] == prev[i] ) {
                continue ;
            } else {
                int idx = i ;
                while ( num[idx] != prev[i] ) {
                    idx ++ ;
                }
                while ( idx > i ) {
                    swap( num[idx] , num[idx-1] ) ;
                    count ++ ;
                    idx -- ;
                }
            }
         }
         return count ;
    }
};
