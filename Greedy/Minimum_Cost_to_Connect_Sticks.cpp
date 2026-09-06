#include<bits.stdc++.h>
using namespace std ;

// Problem : Minimum Cost to Connect Sticks 
// Platform : Leetcode 

class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        int n = sticks.size() , totalCost = 0 ;
        priority_queue<int,vector<int>,greater<int>>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( sticks[i] ) ;
        } 
        int currlength = pq.top() ; // Without Joining Atleast Two No Cost is there 
        pq.pop() ;
        while( !pq.empty() ) {
             currlength = currlength + pq.top() ;
             pq.pop() ;
             totalCost = totalCost + currlength ;
        }
        return totalCost ;
    }
};
