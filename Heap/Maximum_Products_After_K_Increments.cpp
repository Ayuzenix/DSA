#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Product After K Increments
// Platform : Leetcode 

class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        long long n = nums.size() ;
        long long modulo = 1e9 + 7 ; 
        priority_queue<long long,vector<long long>,greater<long long>>pq ;
        for ( int i = 0 ; i < n  ; i ++ ) {
             pq.push( nums[i] ) ;
        }
        while ( k > 0 ) {
             int top = pq.top() ;
             pq.pop() ;
             top ++ ;
             k -- ;
             pq.push( top ) ;
        }
        long long ans = 1 ; 
        while ( !pq.empty() ) {
             ans = ( ( ans * pq.top() ) % modulo ) ;
             pq.pop() ;
        }
        return ( ans % modulo ) ;
    }
};
