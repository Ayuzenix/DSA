#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Subsequence Score 
// Platform : Leetcode 

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n = nums1.size() ;
        priority_queue<pair<long long,long long>>pq1 ; 
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq2 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             pq1.push( { nums1[i] , i } ) ;
        }
        long long sum = 0 ; 
        while ( k > 0 ) {
            long long idx = pq1.top().second ; 
            sum = sum + pq1.top().first ;
            pq2.push( { nums2[idx] , idx } ) ;
            pq1.pop() ; 
            k -- ; 
        }
        long long maxi = INT_MIN ; 
        maxi = max( maxi , ( sum * pq2.top().first )  ) ;
        while( !pq1.empty() ) {
            long long idx = pq2.top().second ; 
            sum = sum - nums1[idx] ; // removed one from minPriorityQueue
            pq2.pop() ;
            sum = sum + pq1.top().first ; 
            pq2.push( { nums2[pq1.top().second] , pq1.top().second } ) ;
            maxi = max( maxi , ( sum * pq2.top().first) ) ;
            pq1.pop() ;
        }
        return maxi ; 
    }
};
