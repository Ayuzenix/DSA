#include<bits/stdc++.h>
using namespace std ;

// Problem : Previous Permutation With One Swap 
// Platform : Leetcode 

class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size() , idx = -1 ;
        for ( int i = n - 1 ; i > 0 ; i -- ) {
             if ( arr[i] < arr[i-1] ) {
                idx = i ;
                break ;
             }
        }
        if ( idx == -1 ) {
            return arr ;
        }
        int idx1 = idx ;
        for ( int i = idx ; i < n ; i ++ ) {
             if ( arr[i] > arr[idx] && arr[i] < arr[idx-1] ) {
                 idx1 = i ;
             }
        }
        swap( arr[idx-1] , arr[idx1] ) ;
        return arr ;
    }
};
