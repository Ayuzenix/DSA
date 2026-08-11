#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Score From Removing Substring 
// Platform : Leetcode

class Solution {
public:

    int forab( string s , int x , int y , char a , char b ) { // ( string , higher value , lower value , higher alp , lower alp )
        int curr = 0 , n = s.size() ;
        stack<char>st ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
             if ( !st.empty() && s[i] == a && st.top() == b ) {
                 curr = curr + x ;
                 st.pop() ;
             } else {
                st.push( s[i] ) ;
             }
        }
        string result = "" ;
        while ( !st.empty() ) {
              if ( result == "" ) {
                  result = result + st.top() ;
                  st.pop() ;
              } else {
                  if ( result.back() == a && st.top() == b ) {
                      curr = curr + x ;
                      result.pop_back() ;
                      st.pop() ;
                  } else if ( result.back() == b && st.top() == a ) {
                      curr = curr + y ;
                      result.pop_back() ;
                      st.pop() ;
                  } else {
                    result.push_back( st.top() ) ;
                    st.pop() ;
                  }
              }
        }
        return curr ;
    }

    int maximumGain(string s, int x, int y) {
        int n = s.size() ;
        int result ;
        if ( x >= y ) {
            result = forab( s , x , y , 'a' , 'b' ) ; // Means "ab" has Higher Priority in this case 
        } else {
            result = forab( s , y , x , 'b' , 'a' ) ; // Means "ba" has Higher Priority in this case 
        }
        return result ;
    }
