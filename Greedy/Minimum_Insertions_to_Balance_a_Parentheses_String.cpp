#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Insertions to Balance a Parentheses String 
// Platform : Leetcode 

class Solution {
public:
    int minInsertions(string s) {
        int n = s.size() , minInsertion = 0 , leftCount= 0 , r = 0 ;
        while ( r < n ) {
             if ( s[r] == '(' ) {
                 leftCount ++ ;
             } else {
                 if ( r < n - 1 && s[r+1] == ')' ) {
                     if ( leftCount > 0 ) {
                         leftCount -- ;
                     } else {
                        minInsertion ++ ;
                     }
                     r ++ ;
                 } else if ( r < n - 1 && s[r+1] != ')' ) {
                     if ( leftCount > 0 ) {
                        leftCount -- ;
                        minInsertion ++ ;
                     } else {
                       minInsertion = minInsertion + ( 2 ) ;
                     }     
                 } else {
                    if ( leftCount == 0 ) {
                        minInsertion = minInsertion + 2 ;
                    } else {
                        minInsertion -- ;
                    }
                 }
             }
             r ++ ;
        }
        minInsertion = minInsertion + ( leftCount * 2 ) ;
        return minInsertion ;
    }
};
