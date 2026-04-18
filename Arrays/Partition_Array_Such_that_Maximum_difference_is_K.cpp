#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition Array such that Maximum Difference is K 
// Platform : Leetcode 

class Solution {
public: 
    int partitionArray(vector<int>& nums, int k) {
    int n = nums.size() , count = 0 , r = n -1 , maxi = INT_MIN , mini = INT_MAX ;
    sort ( nums.begin() , nums.end() ) ;
        while ( r >= 0 ) {
              maxi = max ( maxi , nums[r] ) ;
              mini = min ( mini , nums[r] ) ;
              if ( ( maxi - mini ) > k ) {
                    count ++ ;
                    maxi = nums[r] ;
              }
              r -- ;
        }
        return ( count + 1 ) ;
    }
};
