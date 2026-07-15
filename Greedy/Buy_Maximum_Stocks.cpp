#include<bits/stdc++.h>
using namespace std ;

// Problem : Buy Maximum Stocks 
// Platform : GeeksforGeeks 

class Solution {
  public:
    int buyMaximumProducts(int k, vector<int> price) {
        int n = price.size() , curr = 0 , count = 0 ;
        vector<pair<int,int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { price[i] ,  i + 1 } ) ;
        }
        sort( store.begin() , store.end() ) ;
        for ( auto &it : store ) {
             int x = it.first , y = it.second , maxi = 0  , idx = 0 ;
             for ( int i = 1 ; i <= y ; i ++ ) { // as Given Constraints are Smaller 
                  int toAdded = ( i * x ) ;
                  if ( ( toAdded + curr ) <= k ) {
                      maxi = toAdded ;
                      idx = i ;
                  } else {
                      break ;
                  }
             }
             count = count + idx ;
             curr = curr + maxi ;
        }
        return count ;
    }
};
