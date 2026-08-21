#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximal Score After Applying K Operations 
// Platform : Leetcode 

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size() ;
        long long score = 0 ;
        priority_queue<int>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( nums[i] ) ;
        }
        while ( k > 0 ) {
             long long curr = pq.top() ;
             score = score + curr ;
             pq.pop() ;
             if ( curr % 3 == 0 ) {
                 curr = ( curr / 3 ) ;
             } else {
                 curr = ( curr / 3 ) + 1 ;
             }
             pq.push( curr ) ;
             k -- ;
        }
        return score ;
    }
};
