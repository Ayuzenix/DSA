#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Kth Largest Integer in the Array 
// Platform : Leetcode 

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size() ;
        priority_queue<pair<int,string>>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( { nums[i].size() , nums[i] } ) ;
        }
        k -- ;
        while ( !pq.empty() && k > 0 ) {
               pq.pop() ;
               k -- ;
        }
        return pq.top().second ;
    }
};
