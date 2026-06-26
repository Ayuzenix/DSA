#include<bits/stdc++.h>
using namespace std ;

// Problem : Distribute Money to Maximum Children 
// Platform : Leetcode 

class Solution {
public:
    int distMoney(int money, int children) {
        if ( money < children ) {
            return -1 ;
        }
        int rem = money - children ;
        int total = rem / 7 ;
        int leftover = rem % 7 ;
        if ( ( total == children - 1 ) && ( leftover == 3 ) ) {
            return children - 2 ;
        }  else {
            if ( total == children ) {
                if ( leftover == 0 ) {
                    return total ;
                } else {
                    return total - 1 ;
                }
            } else if ( total < children ) {
                return total ;
            } else if ( total > children ) {
                return ( children - 1 ) ;
            }
        }
        return -1 ;
    }
};
