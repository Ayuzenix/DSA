#include<bits/stdc++.h>
using namespace std ;

// Problem : H Index 
// Platform : Leetcode 

class Solution {
public:
    int toCount ( vector<int>& citations , int mid , int n ) { 
        int idx = lower_bound( citations.begin() , citations.end() , mid ) - citations.begin() ;
        if ( idx >= n ) {
            return -1 ;
        }
        int rem = ( n - idx ) ;
        return rem ;
    }

    int hIndex(vector<int>& citations) {
        sort( citations.begin() , citations.end() ) ;
        int n = citations.size() ;
        int low = 0 , high = *max_element( citations.begin() , citations.end() ) ;
        int ans = low ;
        while ( low <= high ) {
            int mid = ( low + high ) / 2 ;
            if ( toCount( citations , mid , n ) >= mid ) {
                ans = mid ;
                low = mid + 1 ;
            } else {
                high = mid - 1 ;
            }
        }
        return ans ;
    }
};
