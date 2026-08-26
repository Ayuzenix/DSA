#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Greatness of an Array 
// Platform : Leetcode 

class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int n = nums.size() , count = 0 ;
        priority_queue<int,vector<int>,greater<int>>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( nums[i] ) ;
        }
        sort( nums.begin() , nums.end() ) ;
        int i = 0 ;
        while ( !pq.empty() ) {
              if ( pq.top() > nums[i] ) {
                  count ++ ;
                  pq.pop() ;
                  i ++ ;
              } else {
                pq.pop() ;
              }
        }
        return count ;
    }
};
