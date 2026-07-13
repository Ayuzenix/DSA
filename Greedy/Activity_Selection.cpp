#include<bits/stdc++.h>
using namespace std ;

// Problem : Activity Selection 
// Platform : GeeksforGeeks 

class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ )  {
             store.push_back( { start[i] , finish[i] } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ) {
             if ( a[1] == b[1] ) {
                 return b[0] > a[0] ;
             } 
             return b[1] > a[1] ;
        }) ;
        int count = 0 , prev = - 1 ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             if ( prev != -1 ) {
                 if ( store[i][0] > prev ) {
                     count ++ ;
                     prev = store[i][1] ;
                 }
             } else {
                 count ++ ;
                 prev = store[i][1] ;
             }
        }
        return count ;
    }
};
