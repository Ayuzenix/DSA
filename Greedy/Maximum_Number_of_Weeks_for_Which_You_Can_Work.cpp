#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Weeks for Which You Can Work
// Platform : Leetcode 

class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
         long long n = milestones.size() ;
         sort( milestones.rbegin() , milestones.rend() ) ;
         long long sum = 0 , maxi = milestones[0] ;
         for ( int i = 1 ; i < n ; i ++ ) {
              sum = sum + milestones[i] ;
         }
         if ( maxi <= sum ) {
             return ( maxi + sum ) ;
         }
         return ( 2*sum + 1 ) ;
    }
};
