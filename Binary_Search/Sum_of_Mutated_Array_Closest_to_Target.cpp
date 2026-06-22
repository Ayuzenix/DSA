#include<bits/stdc++.h>
using namespace std ;

// Problem : Sum of Mutated Array Closest to Target 
// Platform : Leetcode 

class Solution {
public:

    int toCheck( vector<int>& arr , int mid ) {
        int sum = 0 ;
        for ( int i = 0 ; i < arr.size() ; i ++ ) {
            if ( arr[i] > mid ) {
                sum = sum + mid ;
            } else {
                sum = sum + arr[i] ;
            }
        }
        return sum ;
    }

    int findBestValue(vector<int>& arr, int target) {
        int n = arr.size() , low = 0 , high = target , ans = *max_element( arr.begin() , arr.end() ) ;
        int sum = 0 , prev ;
        for ( int i = 0 ; i < n ; i ++ ) {
            sum = sum + arr[i] ;
        }
        prev = abs( sum - target ) ;
        while ( low <= high ) {
            int mid = ( low + high ) / 2 ;
            if ( toCheck ( arr , mid ) > target ) {
                int diff = toCheck( arr , mid ) - target ;
                if ( diff < prev ) {
                    prev = diff ;
                    ans = mid ;
                } else if ( diff == prev ) { 
                    if ( mid < ans ) {
                        ans = mid ;
                    }
                }
                high = mid - 1 ;
            } else if ( toCheck( arr , mid ) < target ) {
                int diff = target - toCheck( arr , mid ) ;
                if ( diff < prev ) {
                    prev = diff ;
                    ans = mid ;
                } else if ( diff == prev ) {
                    if ( mid < ans ) {
                        ans = mid ;
                    }
                }
                low = mid + 1 ;
            } else {
                prev = 0 ;
                ans = mid ; 
                high = mid - 1 ;
            }
        }
        return ans ;
    }
};
