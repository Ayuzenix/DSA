#include<bits/stdc++.h>
using namespace std ;

// Problem : Check if a String Can Break Another String 
// Platform : Leetcode 

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
         int n = s1.size() ;
         sort( s1.begin() , s1.end() ) ;
         sort( s2.begin() , s2.end() ) ;
         // Case 1:can s1 break s2 
         int c1 = 1 , c2 = 1 ;
         for ( int i = 0 ; i < n ; i ++ ) {
             if ( ( s1[i] < s2[i] ) ) {
                 c1 = 0 ;
                 break ;
             }
         }
         // Case 2:can s2 break s1 
         for ( int i = 0 ; i < n ; i ++ ) {
             if ( s2[i] < s1[i] ) {
                c2 = 0 ;
                break ;
             }
         }
         if ( c1 == 1 || c2 == 1 ) {
            return true ;
         }
         return false ;
    }
};
