#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimize Maximum of Array 
// Platform : Leetcode 

class Solution {
public:

    bool tocheck( vector<int>& nums , int mid ) {
            vector<long long>store( nums.begin() , nums.end() ) ;
            for ( int i = store.size() - 1 ; i > 0 ; i -- ) {
                 if ( ( store[i] > mid ) ) {
                      long long diff = store[i] - mid ;
                      store[i] = store[i] - diff ;
                      store[i-1] = store[i-1] + diff ;
                 }
            }
            return ( store[0] <= mid ) ;
    }

    int minimizeArrayValue(vector<int>& nums) {
        long long n = nums.size() , count = 0 , low = 1 , high = *max_element( nums.begin() , nums.end() ) ;
        long long ans = high ;
        while ( low <= high ) {
             long long mid = ( low + high ) / 2 ;
             if ( tocheck( nums , mid ) == true ) {
                   high = mid - 1 ;
                   ans = mid ;
             } else {
                   low = mid + 1 ; 
             }
        }
        return ans ;
    }
};
