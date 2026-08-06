#include<bits/stdc++.h>
using namespace std ;

// Problem : Break a Palindrome 
// Platform : Leetcode 

class Solution {
public:
    string breakPalindrome(string palindrome) {
          int n = palindrome.size() ;
          if ( n == 1 ) {
              return "" ;
          }
          int idx = -1 , count = 0 ;
          for ( int i = 0 ; i < n ; i ++ ) {
               if ( palindrome[i] != 'a' && idx == -1 ) {
                   idx = i ;
               }
               if ( palindrome[i] == 'a' ) {
                   count ++ ;
               }
          }
          if ( count == n - 1 ) {
              palindrome[n-1] = 'b' ;
          }else if ( idx != -1 ) {
            palindrome[idx] = 'a' ;
          } else {
            palindrome[n-1] = 'b' ;
          }
          return palindrome ;
    }
};
