#include<bits/stdc++.h>
using namespace std ;

// Problem : Candy 
// Platform : Leetcode 

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size() , totalCandies = 0 ;
        vector<int>leftToRight( n , 1  ) ;
        vector<int>rightToLeft( n , 1  ) ;
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( ratings[i] > ratings[i-1] ) {
                leftToRight[i] = ( leftToRight[i-1] + 1 ) ;
            }
        }
        for ( int i = n - 2 ; i >= 0 ; i -- ) {
            if ( ratings[i] > ratings[i+1] ) {
                rightToLeft[i] = ( rightToLeft[i+1] + 1 ) ;
            }
        }
        for ( int i = 0 ; i < n ; i ++ ) {
           totalCandies = totalCandies + max( leftToRight[i] , rightToLeft[i] ) ; 
        }
        return totalCandies ;
    }
};
