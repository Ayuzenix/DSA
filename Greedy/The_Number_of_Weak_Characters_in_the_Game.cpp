#include<bits/stdc++.h>
using namespace std ;

// Problem : The Number of Weak Characters in the Game 
// Platform : Leetcode 

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n = properties.size() , weakChar = 0 ;
        stack<pair<int,int>>st ;
        sort( properties.begin() , properties.end() , []( auto &a , auto &b) {
             if ( a[0] == b[0] ) {
                 return a[1] > b[1] ;
             }
             return b[0] > a[0] ;
        } ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             while ( !st.empty() && st.top().first < properties[i][0] && st.top().second < properties[i][1] ) {
                  st.pop() ;
                  weakChar ++ ;
             }
             st.push( { properties[i][0] , properties[i][1] } ) ;
        }
        return weakChar ;
    }
};
