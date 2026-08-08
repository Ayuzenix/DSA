#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Coins You Can Get 
// Platform : Leetcode 

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size() ;
        sort( piles.begin() , piles.end() ) ;
        int l = 0 , r = n - 1 , maxCoin = 0 ;
        while ( ( r - l + 1 ) >= 3 ) {
              int p = 2 , mini = INT_MAX  ;
              while ( p > 0 ) {
                  mini = min( mini , piles[r] ) ;
                  r -- , p -- ;
              }
              l ++ ;
              maxCoin = maxCoin + ( mini ) ;
        }
        return maxCoin ;
    }
};
