#include<bits/stdc++.h>
using namespace std ;

// Problem : Apple Redistribution into Boxes 
// Platform : Leetcode 

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort( apple.rbegin() , apple.rend() ) ;
        sort( capacity.rbegin() , capacity.rend() ) ;
        int sum = 0 ;
        for  ( int i = 0 ; i < apple.size() ; i ++ ) {
            sum = sum + apple[i] ;
        }
        int curr = 0 , ans = -1 ;
        for ( int i = 0 ; i < capacity.size() ; i ++ ) {
            curr = curr + capacity[i] ;
            if ( curr >= sum ) {
                ans = ( i + 1 ) ;
                break ;
            }
        }
        return ans ;
    }
};
