#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Swaps to Make the String Balanced 
// Platform : Leetcode 

class Solution {
public:
    // right to left = negtive / zero
    // left to right = positive / zero 
    int minSwaps(string s) {
        int n = s.size() , count = 0 , curr = 0 , l = 0 , r = n - 1 ; 
        while ( l < r ) {
            if ( s[l] == '[' ) {
                curr ++ ;
            } else { // s[l] = ']'
                curr -- ; 
            }
            if ( curr < 0 ) {
                while ( r > l && s[r] == ']' ) {
                    r -- ; 
                }
                swap( s[l] , s[r] ) ;
                count ++ ; 
                curr = 1 ; // since at s[l] '[' is Placed now 
            }
            l ++ ; 
        }
        return count ; 
    }
};
