#include<bits/stdc++.h>
using namespace std ;

// Problem : Gas Station 
// Platform : Leetcode 

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size() , totalGas = 0 , totalCost = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            totalGas = totalGas + gas[i] ;
            totalCost = totalCost + cost[i] ;
        }
        if ( totalGas < totalCost ) {
            return -1 ;
        }
        vector<int>store( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            store[i] = ( gas[i] - cost[i] ) ;
        }
        int l = 0 , r = 0 , curr = 0 ;
        while ( r < n ) {
            curr = curr + store[r] ;
            if ( curr < 0 ) {
                curr = 0 ;
                l = r + 1 ;
            }
            r ++ ;
        }
        return l ;
    }
};
