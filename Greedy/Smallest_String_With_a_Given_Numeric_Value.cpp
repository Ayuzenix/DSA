#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest String With A Given Numeric Value
// Platform : Leetcode 

class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<char>store( 26 ) ;
        for ( char i = 'a' ; i <='z' ; i ++ ) {
            store[ i -'a' ] = i ;
        }
        string ans="" ;
        while ( n > 1 ) {
            long long idx = ( k - ( 26 * ( n - 1 ) ) ) - 1 ;
            if ( idx < 0 ) {
                // ans = ans + store[0] ; It Creates copy of String each times it runs which is way costly in terms of memory 
                ans.push_back( store[0] ) ;
                k = k - 1 ;
            } else {
                // ans = ans + store[idx] ;
                ans.push_back( store[idx] ) ;
                k = ( k - ( idx + 1 ) ) ;
            }
            n = n - 1 ;
        }
        // ans = ans + store[k-1] ;
        ans.push_back( store[k-1] ) ;
        return ans ;
    }
};
