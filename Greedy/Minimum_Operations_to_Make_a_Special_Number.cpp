#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Make a Special Number 
// Platform : Leetcode 

class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size() , totalDeletions = INT_MAX ;
        unordered_map<char,int>mp ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
             if ( ( num[i] == '2' && mp.find( '5' ) != mp.end() ) ) {
                  int right = ( n - mp['5'] - 1 ) +  ( mp['5'] - i - 1 ) ;
                  int left =  ( i - 0 ) + ( mp['5'] - i - 1 ) + ( n - mp['5'] -  1 ) ;
                  int mini = min( right , left ) ;
                  totalDeletions = min( totalDeletions , mini ) ;
                } else if ( num[i] == '5' && mp.find( '0' ) != mp.end() ) {
                  int right = ( n - mp['0'] - 1 ) +  ( mp['0'] - i - 1 ) ;
                  int left =  ( i - 0 ) + ( mp['0'] - i - 1 ) + ( n - mp['0'] - 1 ) ;
                  int mini = min( right , left ) ;
                  totalDeletions = min( totalDeletions , mini ) ;
                } else if ( num[i] == '0' && mp.find( '0' ) != mp.end() ) {
                  int right = ( n - mp['0'] - 1 ) +  ( mp['0'] - i - 1 ) ;
                  int left =  ( i - 0 ) + ( mp['0'] - i - 1 ) + ( n - mp['0'] - 1 ) ;
                  int mini = min( right , left ) ;
                  totalDeletions = min( totalDeletions , mini ) ;
                } else if ( num[i] == '7' && mp.find('5' ) != mp.end() ) {
                  int right = ( n - mp['5'] - 1 ) +  ( mp['5'] - i - 1 ) ;
                  int left =  ( i - 0 ) + ( mp['5'] - i - 1 ) + ( n - mp['5'] - 1 ) ;
                  int mini = min( right , left ) ;
                  totalDeletions = min( totalDeletions , mini ) ;
                }
            mp[num[i]] = i ;
        }
        if ( totalDeletions == INT_MAX ) {
             if ( mp.find( '0' ) != mp.end() ) {
                 totalDeletions =  ( n - mp['0'] - 1 ) + ( mp['0'] - 0 ) ;  
             } else {
                totalDeletions = n ;
             }
        }
        return totalDeletions ;
    }
};
