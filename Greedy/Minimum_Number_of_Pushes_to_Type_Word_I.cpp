#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Pushes to Type Word I 
// Platform : Leetcode 

class Solution {
public: // This sets a pattern for 8 
    int minimumPushes(string word) {
        int n = word.size() , curr = 0 , count = 1 ;
        while ( n > 0 ) {
            if ( n >= 8 ) {
                curr = curr + ( count * 8 ) ;
                count ++ ;
                n = n - 8 ;
            } else {
                curr = curr + ( count * n ) ;
                count ++ ;
                n = 0 ;
            }
        }
        return curr ;
    }
};
