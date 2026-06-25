#include<bits/stdc++.h>
using namespace std ;

// Problem : Buy Two Chocolates
// Platform : Leetcode 

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort( prices.begin() , prices.end() ) ;
        int curr = money ;
        for ( int i = 0 ; i <=1 ; i ++ ) {
            curr = curr - prices[i] ;
            if ( curr < 0 ) {
                return money ;
            }
        }
        return curr ;
    }
};
