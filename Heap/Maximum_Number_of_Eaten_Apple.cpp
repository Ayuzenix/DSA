#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Eaten Apples
// Platform : Leetcode 

class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int n = apples.size() ;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ;
        int totalEaten = 0 , idx = 0 ;
        while ( idx < n ) {
            while ( !pq.empty() && pq.top().first <= idx ) {
                pq.pop() ;
            }
            if ( apples[idx] != 0 ) {
                pq.push( { idx + days[idx] , apples[idx] } ) ;
            }
            if ( !pq.empty() ) {
                int deadline = pq.top().first , remaining = pq.top().second ; // Picking one from available 
                pq.pop() ;
                remaining -- ;
                totalEaten ++ ;
                if ( remaining > 0 ) {
                    pq.push( { deadline , remaining } ) ;
                }
            }
            idx ++ ; // Day keeps on increasing 
        }
        while ( !pq.empty() ) {
            while ( !pq.empty() && pq.top().first <= idx ) {
                pq.pop() ;
            }
            if ( !pq.empty() ) {
                int deadline = pq.top().first , remaining = pq.top().second ; // Picking one from available
                pq.pop() ;
                remaining -- ;
                totalEaten ++ ;
                if ( remaining > 0 ) {
                    pq.push( { deadline , remaining } ) ;
                }
            }
            idx ++ ; // Day keeps on increasing 
        }
        return totalEaten ;
    }
};
