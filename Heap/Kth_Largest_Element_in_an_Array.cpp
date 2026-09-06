#include<bits/stdc++.h>
using namespace std ;

// Problem : Kth Largest Element in an Array 
// Platform : Leetcode 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size() ;
        priority_queue<int>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( nums[i] ) ;
        }
        int count = 1 ;
        while ( count != k ) {
            pq.pop() ;
            count ++ ;
        }
        return pq.top() ;
    }
};
