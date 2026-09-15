#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Happy String 
// Platform : Leetcode 

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq ;
        if ( a != 0 ) {
             pq.push( { a , 'a' } ) ;
        }
        if ( b != 0 ) {
             pq.push( { b , 'b' } ) ;
        }
        if ( c != 0 ) {
             pq.push( { c , 'c' } ) ;
        }
        string result = "" ;
        while ( !pq.empty() ) {
            if ( result != "" && pq.top().second == result.back() ) {
                 int x = pq.top().first ;
                 char y = pq.top().second ;
                 pq.pop() ;
                 if ( pq.empty() ) {
                     break ;
                 }
                //  result = result + pq.top().second ;
                 result.push_back( pq.top().second ) ;
                 int currInt = pq.top().first - 1 ;
                 char currChar = pq.top().second ;
                 pq.pop() ;
                 if ( currInt != 0 ) {
                 pq.push( { currInt , currChar } ) ;
                 }
                 pq.push( { x , y } ) ;
            } else {
                int mini = min( 2 , pq.top().first ) ;
                for ( int i = 0 ; i < mini ; i ++ ) {
                    //  result = result + pq.top().second ;
                    result.push_back( pq.top().second ) ;
                }
                int currInt = pq.top().first - mini ;
                 char currChar = pq.top().second ;
                 pq.pop() ;
                 if ( currInt != 0 ) {
                 pq.push( { currInt , currChar } ) ;
                 }
            }
         }
         return result ;
    }
};
