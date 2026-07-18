#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Meetings in One Room 
// Platform : GeeksforGeeks 

class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        int n = s.size() ;
        vector<vector<int>>store ;
        vector<int>result ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { s[i] , f[i] , i } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ) {
             if ( a[1] == b[1] ) {
                 return b[2] > a[2] ;
             }
             return b[1] > a[1] ;
        }) ;
        int prev = -1 , idx = -1 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( prev == -1 ) {
                 prev = store[i][1] ;
                 idx = store[i][2] ;
             } else {
                 if ( store[i][0] > prev ) {
                     result.push_back( idx + 1 ) ;
                     prev = store[i][1] ;
                     idx = store[i][2] ;
                 }
             }
        }
        result.push_back( idx + 1 ) ;
        sort( result.begin() , result.end() ) ;
        return result ;
    }
};
