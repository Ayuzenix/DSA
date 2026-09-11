#include<bits/stdc++.h>
using namespace std ;

// Problem : Kth Smallest Prime Fraction 
// Platform : Leetcode 

class Solution {
public: // Intuition:Same as Find K Pairs with Smallest Sums 
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
         int n = arr.size() ;
        //  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq ;
        priority_queue<pair<double,pair<int,int>>>pq ; // Max Heap 
        for ( int i = 0 ; i < n ; i ++ ) {
             for ( int j = n - 1 ; j >= 0 ; j -- ) {
                  if ( i == j ) {
                      continue ;
                  } else {
                    double fraction = double( arr[i] / ( 0.1*arr[j] ) ) ;
                    if ( pq.size() < k ) {
                         pq.push( { fraction , { i , j } } ) ;
                    } else { // pq.size() >= k 
                        if ( pq.top().first > fraction ) {
                             pq.pop() ;
                             pq.push( { fraction , { i , j } } ) ;
                        } else {
                             break ;
                        }
                    }
                  }
             }
        }
        while ( !pq.empty() && pq.size() > k ) {
               pq.pop() ;
        }
        int leftIdx = pq.top().second.first , rightIdx = pq.top().second.second ;
        return { arr[leftIdx] , arr[rightIdx] } ;
    }
};
