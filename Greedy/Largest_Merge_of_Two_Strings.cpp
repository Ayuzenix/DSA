#include<bits/stdc++.h>
using namespace std ;

// Problem : Largest Merge Of Two Strings 
// Platform : Leetcode 

class Solution {
public:
    string largestMerge(string word1, string word2) {
           int n = word1.size() , m = word2.size() ; 
           string mergedResult = "" ;
           int r1 = 0 , r2 = 0 ;
           while ( r1 < n && r2 < m ) {
                  if ( word1[r1] > word2[r2] ) {
                      mergedResult = mergedResult + word1[r1] ;
                      r1 ++ ;
                  } else if ( word2[r2] > word1[r1] ) {
                      mergedResult = mergedResult + word2[r2] ;
                      r2 ++ ;
                  } else {
                     int i = r1 , j = r2 ;
                     while ( i < n && j < m && word1[i] == word2[j] ) {
                            i ++ ;
                            j ++ ;
                     }
                     if( i >= n && j >= m ) {
                          mergedResult = mergedResult + word1[r1] ;
                          r1 ++ ;
                     } else if ( i >= n || j >= m ) {
                         if ( i >= n ) {
                             mergedResult = mergedResult + word2[r2] ;
                             r2 ++ ;
                         } else {
                                 mergedResult = mergedResult + word1[r1] ;
                                 r1 ++ ;
                         }
                     } else {
                         if ( word1[i] > word2[j] ) {
                             mergedResult = mergedResult + word1[r1] ;
                             r1 ++ ;
                         } else {
                             mergedResult = mergedResult + word2[r2] ; 
                             r2 ++ ;
                         }
                     }
                  }
           }
           while ( r1 < n ) {
                 mergedResult = mergedResult + word1[r1] ;
                 r1 ++ ;
           }   
           while ( r2 < m ) {
                 mergedResult = mergedResult + word2[r2] ;
                 r2 ++ ;
           }  
           return mergedResult ;
    }
};
