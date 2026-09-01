#include<bits/stdc++.h>
using namespace std ;

// Problem : Remove Adjacent Almost Equal Characters 
// Platform : Leetcode 

class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n = word.size() , removed = 0 ;
        for ( int i = 1 ; i < n ; i ++ ) {
             int diff = abs( ( word[i] - 'a' ) - ( word[i-1] - 'a' ) ) ;
             if ( word[i] == word[i-1] || diff == 1  ) {
                 if ( i < n - 1 ) {
                     if ( word[i] == word[i+1] ) {
                         int diff = ( word[i] - 'a' ) ;
                         word[i] = ( (  'a' + diff + 1 ) % 97 ) ; 
                         removed ++ ;
                     } else {
                        int diff = ( word[i+1] - 'a' ) ;
                         word[i] = ( (  'a' + diff + 1 ) % 97 ) ; 
                         removed ++ ;
                     }
                 } else {
                        int diff = ( word[i] - 'a' ) ;
                         word[i] = ( (  'a' + diff + 1 ) % 97 ) ; 
                         removed ++ ;
                 }
             }
        }
        return removed ;
    }
};
