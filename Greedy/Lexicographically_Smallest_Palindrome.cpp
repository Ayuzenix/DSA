#include<bits/stdc++.h>
using namespace std ;

// Problem : Lexicographically Smallest Palindrome 
// Platform : Leetcode 

class Solution {
public:
    string makeSmallestPalindrome(string s) {
         int n = s.size() , l = 0 , r = n - 1 ;
         while ( l < r ) {
             if ( s[l] == s[r] ) {
                l ++ ;
                r-- ;
             } else {
                if ( s[l] < s[r] ) {
                    s[r] = s[l] ;
                } else {
                    s[l] = s[r] ;
                }
                l ++ ;
                r -- ;
             }
         }
         return s ;
    }
};
