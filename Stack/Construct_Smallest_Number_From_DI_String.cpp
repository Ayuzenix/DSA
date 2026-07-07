#include<bits/stdc++.h>
using namespace std ;

// Problem : Construct Smallest Number From DI String 
// Platform : Leetcode 

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size() ;
        stack<int>st ;
        int count = 1 ;
        string str = "" ;
        for ( int i = 0 ; i < pattern.size() ; i ++ ) {
             st.push( count ) ;
             if ( pattern[i] =='I' ) {
                while ( !st.empty() ) {
                    str.push_back( st.top() + '0' ) ;
                    st.pop() ;
                }
             } 
             count ++ ;
        }
        st.push( count ) ;
        while ( !st.empty() ) {
            str.push_back( st.top() + '0' ) ;
            st.pop() ;
        }
        return str ;
    }
};
