#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Ice Cream Bars 
// Platform : Leetcode 

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size() , totalIceCream = 0 ;
        sort( costs.begin() , costs.end() ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int curr = costs[i] ;
            if ( curr <= coins ) {
                totalIceCream ++ ;
                coins = coins - curr ;
            }
        }
        return totalIceCream ;
    }
};
