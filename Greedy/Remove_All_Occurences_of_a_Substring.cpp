#include<bits/stdc++.h>
using namespace std ;

// Problem : Remove All Occurrences of a Substring 
// Platform : Leetcode 

class Solution {
public:
    string removeOccurrences(string s, string part) {
           int n = s.size() , m = part.size() ;
           unordered_map<int,int>Pmp ;
           for ( int i = 0 ; i < m ; i ++ ) {
                Pmp[part[i]] ++ ;
           }
           stack<char>st ;
           unordered_map<int,int>mp ;
           for ( int i = 0 ; i < n ; i ++ ) {
                if ( Pmp.find( s[i] ) != Pmp.end() ) {
                    st.push( s[i] ) ;
                    mp[s[i]] ++ ;
                } else {
                    st.push( s[i] ) ; 
                }
                if ( mp.size() == Pmp.size() ) {
                    string str = "" ;
                    int r = m - 1 ;
                    unordered_map<int,int>mp1 = mp ;
                    while ( !st.empty() && r >=0 && st.top() == part[r] ) {
                           str = str + st.top() ;
                           mp1[st.top()] -- ;
                           st.pop() ;
                           r -- ;
                    }
                    reverse( str.begin() , str.end() ) ;
                    if ( str == part ) {
                        mp = mp1 ;
                    } else {
                        for ( int i = 0 ; i < str.size() ; i ++ ) {
                             st.push( str[i] ) ;
                        }
                    }
                }
           }
           string result = "" ;
           while ( !st.empty() ) {
                result = result + st.top() ;
                st.pop() ;
           }
           reverse( result.begin() , result.end() ) ;
           return result ;
    }
};
