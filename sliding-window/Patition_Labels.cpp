#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition Labels 
// Platform : Leetcode 

// Approach --> Brute Force 
class Solution {
public:
    
    bool toCheck( vector<int>&mp , int k , int l  , string s ) {
         
         for ( int i = k ; i <= l ; i ++ ) {
              if ( mp[s[i]-'a'] != 0 ) {
                 return false ;
              }
         }
         return true ;
    }

    vector<int> partitionLabels(string s) {
        int n = s.size() ;
        vector<int>mp( 26 , 0 ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[s[i]-'a'] ++ ;
        }
        vector<int>store ;
        int l = 0 , k = 0 ;
        while ( l < n ) {
             mp[s[l] -'a'] -- ;
             if ( toCheck( mp , k , l , s ) == true ) {
                store.push_back( l - k + 1 ) ;
                k = l + 1 ;
             }
             l ++ ;
        }
        return store ;
    }
};

// Approach -->> Optimal 

class Solution {
public:
    vector<int> partitionLabels(string s) {
           int n = s.size() ;
           vector<int>mp ( 26 , 0 ) ;
           for ( int i = 0 ; i < n  ; i ++ ) {
            mp[s[i] -'a']  = i ;
           }
           int k = 0 , l = 0 ;
           vector<int>result ;
           for ( int i = 0 ; i < n ; i ++ ) {
            l = max ( l , mp[s[i] - 'a']) ;
            if ( i == l ) {
                result.push_back( l - k + 1 ) ;
                k = l + 1 ;
            }
           }
           return result ;
    }
};
