#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Happiness of Selected Children 
// Platform : Leetcode 

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long n = happiness.size() ;
        priority_queue<int>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( happiness[i] ) ;
        }
        long long score = 0 , count = 0 ;
        while ( count != k ) {
            long long curr = pq.top() ;
            if ( ( curr - count ) < 0 ) {
                 curr = 0 ;
            } else {
                 curr = ( curr - count ) ;
            }
            score = score + curr ;
            pq.pop() ;
            count ++ ;
        }
        return score ;
    }
};
