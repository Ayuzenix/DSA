#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Halve Array Sum 
// Platform : Leetcode 

class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n = nums.size() ;
        double sum = 0 ;
        priority_queue<double>pq ;
        for ( int i = 0 ; i < nums.size() ; i ++ ) {
             sum = sum + nums[i] ;
             pq.push( nums[i] ) ;
        }
        double half = sum / 2 ;
        double curr = sum ;
        int operations = 0 ;
        while ( ( curr ) > half ) {
               double top = pq.top() ;
               pq.pop() ;
               double nhalf = top / 2 ;
               curr = curr - ( nhalf ) ;
               pq.push( nhalf ) ;
               operations ++ ;
        }
        return operations ;
    }
};
