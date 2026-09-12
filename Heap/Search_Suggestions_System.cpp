#include<bits/stdc++.h>
using namespace std ;

// Problem : Search Suggestions System 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
         int n = searchWord.size() , idx = 0 ;
         vector<vector<string>>result ;
         string curr = "" ;
         while ( idx < n ) {
            //  curr = curr + searchWord[idx] ;
             curr.push_back( searchWord[idx] ) ;
             priority_queue<string>pq ;
             for ( int i = 0 ; i < products.size() ; i ++ ) {
                  string str = "" ;
                  for ( int j = 0 ; j < products[i].size() ; j ++ ) {
                    //    str = str + products[i][j] ;
                        str.push_back( products[i][j] ) ;
                        if ( str == curr ) {
                           if ( pq.size() < 3 ) {
                               pq.push( products[i] ) ;
                           } else {
                             if ( pq.top() > products[i] ) {
                                 pq.pop() ;
                                 pq.push( products[i] ) ;
                             }
                           }
                           break ;
                       }
                  }
             }
             vector<string>store ;
             while( !pq.empty() ) {
                 store.push_back( pq.top() ) ; // Store is getting filled with Lexicographically smaller order
                 pq.pop() ;
             }
             reverse( store.begin() , store.end() ) ;
             result.push_back( store ) ;
             idx ++ ;
         }
         return result ;
    }
};
