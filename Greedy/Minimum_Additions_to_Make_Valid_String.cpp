#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Additions to Make Valid String 
// Platform : Leetcode 

class Solution {
public:
    int addMinimum(string word) {
        int n = word.size() , countInsertion = 0 , idx = 0 ;
        stack<char>st ;
        while ( idx < n ) {
             if ( st.empty() ) {
                 if ( word[idx] == 'a' ) {
                     st.push( 'a' ) ;
                     idx ++ ;
                 } else if ( word[idx] == 'b' ) {
                     st.push( 'a' ) , countInsertion ++ ;  
                 } else if ( word[idx] == 'c' ) {
                     st.push( 'a' ) ;
                     st.push( 'b' ) ;
                     countInsertion = countInsertion + 2 ;
                 }
             } else {
                if ( st.size() == 1 ) {
                if ( word[idx] == 'b' ) {
                    st.push( 'b' ) ;
                    idx ++ ;
                } else if ( word[idx] == 'c' ) {
                    st.push( 'b' ) ;
                    countInsertion ++ ;
                } else if ( word[idx] == 'a' ) {
                    st.push( 'b' ) ;
                    st.push( 'c' ) ;
                    countInsertion = countInsertion + 2 ;
                }
             } else if ( st.size() == 2 ) {
                if ( word[idx] == 'b' ) {
                    st.push( 'c' ) ;
                    countInsertion ++ ;
                } else if ( word[idx] == 'c' ) {
                    st.push( 'c' ) ;
                    idx ++ ;
                } else if ( word[idx] == 'a' ) {
                    st.push( 'c' ) ;
                    countInsertion ++ ;
                }
             } else {
                while ( !st.empty() ) {
                     st.pop() ;
                }
             }
             }
        }
        countInsertion = countInsertion + ( 3 - st.size() ) ;
        return countInsertion ;
    }
};
