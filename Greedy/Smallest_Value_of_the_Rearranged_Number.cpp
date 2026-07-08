#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest Value of the Rearranged Number 
// Platform : Leetcode 

class Solution {
public:
    long long smallestNumber(long long num) {
        string number = to_string( num ) ;
        if ( number == "0") {
            return 0 ;
        }
        if ( number[0] != '-' ) {
            sort( number.begin() , number.end() ) ;
            if ( number[0] == '0' ) {
                int idx = 0 ;
                while ( idx < number.size() && number[idx] <= number[0] ) {
                    idx ++ ;
                }
                swap( number[0] , number[idx] ) ;
            }
        } else {
            string ans = number ;
            int idx ;
            sort(ans.begin() + 1, ans.end(), greater<char>());
            number = ans ;
        }
        return stoll( number ) ;
    }
};
