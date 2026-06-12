#include<bits/stdc++.h>
using namespace std ;

// Problem : Bitwise ORs of Subarrays 
// Platform : Leetcode 

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n = arr.size() ;
        unordered_set<int>prev ;
        unordered_set<int>result ;
        for ( int i = 0 ; i < n ; i ++ ) { 
             unordered_set<int>curr ;
             for ( auto & it:prev) {
                 int x = ( arr[i] | it ) ;
                 curr.insert( x ) ;
                 result.insert( x ) ;
             }
             curr.insert( arr[i] ) ;
             result.insert( arr[i] ) ;
             prev = curr ;
        }
        return ( result.size() ) ;
    }
};
