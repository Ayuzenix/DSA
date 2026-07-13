#include<bits/stdc++.h>
using namespace std ;

// Problem : Decrease Elements To Make Array Zigzag 
// Platform : Leetcode 

class Solution {
public:

    int oddFunction ( vector<int> nums ) { 
        int count = 0 ;
        if ( nums.size() == 1 ) { 
            return 0 ;
        }
        for ( int i = 1 ; i < nums.size() ; i = i + 2 ) { 
              if ( i == nums.size() - 1 ) { 
               if ( nums[i-1] >= nums[i] ) {
                   count = count + ( nums[i-1] - nums[i] + 1 ) ;
                   nums[i-1] = nums[i] - 1 ;
               }  
             } else {
                if ( nums[i-1] >= nums[i] ) {
                   count = count + ( nums[i-1] - nums[i] + 1 ) ;
                   nums[i-1] = nums[i] - 1 ;
                }
                if ( nums[i+1] >= nums[i] ) {
                   count = count + ( nums[i+1] - nums[i] + 1 ) ;
                   nums[i+1] = nums[i] - 1 ;
                }
             }
        }
        return count ;
    }

    int evenFunction ( vector<int> nums ) { 
        int count = 0 ;
        if ( nums.size() == 1 ) { 
            return 0 ;
        }
        for ( int i = 0 ; i < nums.size() ; i = i + 2 ) { 
             if ( i == 0 ) {
                 if ( nums[1] >= nums[0] ) {
                     count = count + ( nums[1] - nums[0] + 1 ) ;
                     nums[1] = nums[0] - 1 ;
                 }
             } else if ( i == nums.size() - 1 ) { 
               if ( nums[i-1] >= nums[i] ) {
                   count = count + ( nums[i-1] - nums[i] + 1 ) ;
                   nums[i-1] = nums[i] - 1 ;
               }  
             } else {
                if ( nums[i-1] >= nums[i] ) {
                   count = count + ( nums[i-1] - nums[i] + 1 ) ;
                   nums[i-1] = nums[i] - 1 ;
                }
                if ( nums[i+1] >= nums[i] ) {
                   count = count + ( nums[i+1] - nums[i] + 1 ) ;
                   nums[i+1] = nums[i] - 1 ;
                }
             }
        }
        return count ;
    }

    int movesToMakeZigzag(vector<int>& nums) {
        int n = nums.size() ;
        return min ( evenFunction( nums ) , oddFunction( nums ) ) ;
    }
};
