#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Score of Numbers in Ranges 
// Platform : Leetcode 

class Solution {
public:

    bool toCheck( vector<int>& start , int d , long long mid ) {
         long long n = start.size() ;
         long long prev = ( start[ n - 1 ] + d ) ;
         for ( int i = n - 2 ; i >= 0 ; i -- ) {
              int curr = prev - mid ;
              if ( curr >= start[i]  ) {
                  if ( curr > ( start[i] + d ) ) {
                     prev = ( start[i] + d ) ;
                  } else {
                    prev = curr ;
                  }
              } else {
                 return false ;
              }
         }
         return true ;
    }

    int maxPossibleScore(vector<int>& start, int d) {
        sort( start.begin() , start.end() ) ;
        long long n = start.size() ;
        long long maxiScore = -1 ;
        long long low = 0 , high = ( ( start[n-1] + d ) ) ;
        while ( low <= high ) {
             long long mid = ( low + high ) / 2 ;
             if ( toCheck( start , d , mid ) == true ) {
                //  maxiScore = max( maxiScore , mid ) ;
                if ( mid > maxiScore ) {
                     maxiScore = mid ;
                }
                 low = mid + 1 ;
             } else {
                 high = mid - 1 ;
             }
        }
        return maxiScore ;
    }
};
