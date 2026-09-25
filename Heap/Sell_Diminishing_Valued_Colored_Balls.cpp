#include<bits/stdc++.h>
using namespace std ;

// Problem : Sell Diminishing-Valued Colored Balls
// Platform : Leetcode 

class Solution {
public:
    int maxProfit(vector<int>& inventory, int orders) {
        long long n = inventory.size() ;
        long long modulo = 1e9 + 7 ;
        priority_queue<long long>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( inventory[i] ) ;
        }
        long long currValue = 0 ;
        long long topValue = pq.top() , countTop = 1 ;
        pq.pop() ; 
        while ( orders > 0 ) {
             while ( ! pq.empty() && pq.top() == topValue ) {
                  countTop ++ ;
                  pq.pop() ;
                }
             long long x ; 
             if ( pq.empty() ) {
                 x = topValue * countTop ;
             } else {
                x = ( ( topValue - pq.top() ) * countTop ) ;
             }
             if ( x < orders ) { // as Answer will always Exist 
                 long long sum = ( ( ( topValue ) * ( topValue + 1 ) ) / 2 ) - ( ( ( pq.top() ) * ( pq.top() + 1 ) ) / 2 ) ;
                 currValue = currValue + ( sum * countTop ) ;
                 topValue = pq.top() ;
                 orders = orders - ( x ) ;
             } else {
                long long round = ( orders / countTop ) ;
                while ( round > 0 ) {
                    currValue = currValue + ( topValue * countTop ) ;
                    topValue -- ;
                    round -- ;
                    orders = orders - countTop ;
                }
                currValue = currValue + ( orders * topValue ) ;
                orders = 0 ;
             }
        }
        return ( currValue % modulo ) ;
    }
};
