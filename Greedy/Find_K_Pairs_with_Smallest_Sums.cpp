#include<bits/stdc++.h>
using namespace std ;

// Problem : Find K Pairs with Smallest Sums 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>>pq ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < nums1.size() ; i ++ ) {
             for ( int j = 0 ; j < nums2.size() ; j ++ ) {
                  if ( pq.size() < k ) {
                      pq.push( { nums1[i] + nums2[j] , { nums1[i] , nums2[j] } } ) ;
                  } else {
                     int sum = nums1[i] + nums2[j] , topSum = pq.top().first ;
                     if ( sum >= topSum ) {
                         break ;
                     } else {
                        pq.pop() ;
                        pq.push( { sum , { nums1[i] , nums2[j] } } ) ;
                     }
                  }
             }
        }
        while ( !pq.empty() && pq.size() != k ) {
               pq.pop() ;
        }
        while ( !pq.empty() ) {
             int left = pq.top().second.first , right = pq.top().second.second ;
             store.push_back( { left , right } ) ;
             pq.pop() ;
        }
        return store ;
    }
};
