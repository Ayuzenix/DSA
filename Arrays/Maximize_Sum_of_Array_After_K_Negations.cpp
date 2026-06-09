#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Sum Of Array After K Negations
// Platform : Leetcode 

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size() , neg = 0 ;
        for ( int i = 0 ; i < nums.size() ; i ++ ) {
             if ( nums[i] < 0 ) {
                 neg ++ ;
             }
        }
        int rem , sum = 0 ;
        if ( k >= neg ) {
            rem = ( k - neg ) ;
            int mini = INT_MAX ;
             for ( int i = 0 ; i < n ; i ++ ) {
                    if ( nums[i] < 0 ) {
                        nums[i] = ( - nums[i] ) ;
                    }
                    sum = sum + nums[i] ;
                    mini = min( mini , nums[i]) ;
            }
            if ( rem % 2 == 0 ) {
                return sum ;
            } else {
                sum = ( sum - ( 2 * mini ) ) ;
            }
            
        } else {
            sort( nums.begin() , nums.end() ) ;
            for ( int i = 0 ; i < k ; i ++ ) {
                nums[i] = - ( nums[i] ) ;
            }
            for ( int i = 0 ; i < n ; i ++ ) {
                sum = sum + nums[i] ;
            }                           
        }
        return sum ;
    }
};
