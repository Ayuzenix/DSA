#include<bits/stdc++.h>
using namespace std ;

// Problem : Max Sum of a Pair With Equal Sum of Digits 
// Platform : Leetcode 

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        long long n = nums.size() ; 
        priority_queue<pair<long long,long long>>pq ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             long long x = nums[i] ; 
             long long sum = 0 ; 
             while ( x > 0 ) {
                 int digit = ( x % 10 ) ;
                 sum = sum + digit ; 
                 x = ( x / 10 ) ;
             }
             pq.push( { sum , nums[i] } ) ;
        }
        int ans = -1 ; 
        while ( !pq.empty() ) {
             int num = pq.top().first , count = 0 , curr = 0 ;
             while ( !pq.empty() && pq.top().first == num ) {
                    if ( count < 2 ) {
                        curr = curr + pq.top().second ; 
                        count ++ ;
                    }
                    if ( count == 2 ) {
                        ans = max( ans , curr ) ;
                    }
                    pq.pop() ;
             }  
        }
        return ans ; 
    }
};
