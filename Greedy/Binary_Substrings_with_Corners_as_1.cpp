#include<bits/stdc++.h>
using namespace std ;

// Problem : Binary Substrings with Corners as 1
// Platform : GeeksforGeeks 

class Solution {
  public:
    int binarySubstring(string& s) {
        int n = s.size() ;
        vector<int>store( n ) ;
        int count = 0 , l = -1 ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
            if ( s[i] == '1' ) {
                count ++ ;
                l = i ;
            }
            store[i] = count ;
        }
        if ( l == -1 ) return 0 ;
        int r = n - 1 , NumsubString = 0 ;
        while ( r >= 0 ) {
            while ( r >=0 && s[r] != '1' ) {
                r -- ;
            }
            if ( r >=0  ) {
                NumsubString = NumsubString + ( store[l] - store[r] ) ;
                r -- ;
            }
        }
        return NumsubString ;
    }
};
