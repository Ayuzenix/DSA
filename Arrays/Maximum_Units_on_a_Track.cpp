#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Unit on a Truck 
// Platform : Leetcode 

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size() ;
        sort ( boxTypes.begin() , boxTypes.end() , [] ( auto & a , auto & b ) {
             return a[1] > b[1] ;
        }) ;
        int curr = 0 , total = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( ( curr + boxTypes[i][0] ) <= truckSize ) {
                 total = total + ( boxTypes[i][0] * boxTypes[i][1] ) ;
                 curr = curr + boxTypes[i][0] ;
            } else {
                for ( int j = 1 ; j < boxTypes[i][0] ; j ++ ) {
                     if ( ( curr + 1 ) <= truckSize ) {
                        total = total + boxTypes[i][1] ;
                        curr ++ ;
                     } else {
                        break ;
                     }
                }
            }
        }
        return total ;
    }
};
