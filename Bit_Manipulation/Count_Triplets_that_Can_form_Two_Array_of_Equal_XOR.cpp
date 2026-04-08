#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Triplets that can form two Array of Equal XOR
// Platform : Leetcode 

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0 ;
        int n = arr.size() ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int result = arr[i] ;
            for ( int j = i + 1 ; j < n ; j ++ ) {
                result = result ^ arr[j] ;
                if ( result == 0   ) {
                    count = count + ( j - i ) ; 
                }
            }
        }
        return count ; 
    }
};
