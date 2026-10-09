#include<bits/stdc++.h>
using namespace std ;

// Problem : Mice and Cheese 
// Platform : Leetcode 

class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        long long n = reward1.size() ;
        long long totalPoints = 0 ;
        priority_queue<pair<long long,long long>>pq ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             long long diff = reward1[i] - reward2[i] ;
             pq.push( { diff , i } ) ;
             totalPoints = totalPoints + reward2[i] ;
        }
        while ( k -- ) {
            int idx = pq.top().second ; 
            totalPoints = ( totalPoints + reward1[idx] ) - reward2[idx] ;
            pq.pop() ;
        }
        return totalPoints ; 
    }
};
