#include<bits/stdc++.h>
using namespace std ;

// Problem : Odd String Difference 
// Platform : Leetcode 

class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
            string str = words[i] ;
            vector<int>transform ;
            for ( int j = str.size() - 1 ; j > 0 ; j -- ) {
                 int x = ( str[j] - 'a' ) - ( str[j-1] - 'a' ) ; 
                 transform.push_back( x ) ;
            }
            store.push_back( transform ) ;
        }
        for ( int i = 0 ; i < n ; i ++ ) {
            int count = 0 ;
            for ( int j = 0 ; j < n ; j ++ ) {
                if ( store[i] != store[j] ) {
                    count ++ ;
                }
            }
            if ( count != 1 ) {
                return words[i] ;
            }
        }
        return words[ n -1 ] ;
    }
};
