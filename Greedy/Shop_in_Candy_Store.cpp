#include<bits/stdc++.h>
using namespace std ;

// Problem : Shop in Candy Store 
// Platform : GeeksforGeeks 

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size() ;
        sort( prices.begin() , prices.end() ) ;
        int minPrice = 0 , maxPrice = 0 , l = 0 , r = n - 1 , count1 = 0 , count2 = 0 ;
        while ( count1 < n ) {
            minPrice = minPrice + prices[l] ;
            count1 = count1 + ( k + 1 ) ;
            l ++ ;
        }
        while ( count2 < n ) {
            maxPrice = maxPrice + prices[r] ;
            count2 = count2 + ( k + 1 ) ;
            r -- ;
        }
        return { minPrice , maxPrice } ;
    }
};
