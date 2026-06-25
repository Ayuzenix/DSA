#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Unique Subarray Sum After Deletion 
// Platform : Leetcode 

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        vector<int>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int x = nums[i] ;
            if ( mp.find( x ) == mp.end() ) {
                store.push_back( x ) ;
                mp[x] ++ ;
            }
        }
        int maxSum = 0 , maxi = INT_MIN ;
        int neg = 0 ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             if ( store[i] < 0 ) {
                neg ++ ;
             }
        }
        if ( neg == store.size() ) {
            sort( store.begin() , store.end() ) ;
            return store[store.size() - 1 ] ;
        }
        for ( int i = 0 ; i < store.size() ; i ++  )  {
            if ( store[i] >= 0 ) {
            int curr = maxSum + store[i] ;
            if ( curr > store[i] ) {
                maxSum = curr ;
            } else if ( curr <= store[i] ) {
                maxSum = store[i] ;
            }
            maxi = max( maxi , maxSum ) ;
            }
        }
        return maxi ;
    }
};
