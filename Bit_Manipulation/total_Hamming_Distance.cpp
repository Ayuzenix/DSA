#include<bits/stdc++.h>
using namespace std ;

// Problem : Total Hamming Distance 
// Platform : Leetcode 

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size() ;
        int result = 0 ;
        for ( int i = 0 ; i < 32 ; i ++ ) {
             int count1 = 0 ;
             int count0 = 0 ;
             for ( int j = 0 ; j < n ; j ++ ) {
                 int x = ( ( nums[j] & ( 1 << i ) ) == 0 ) ;
                 if ( x == 0 ) {
                    count0 ++ ;
                 } else {
                    count1 ++ ;
                 }
             }
             result = result + ( count0 * count1 ) ;
        }
        return result ;
    }
};
