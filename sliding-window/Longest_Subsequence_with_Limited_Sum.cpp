#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Subsequence With Limited Sum
// Platform : Leetcode 

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size() ;
        sort ( nums.begin() , nums.end() ) ;
        vector<int>prefix( n , 0 ) ;
        prefix[0] = nums[0] ;
        for ( int i = 1 ; i < n ; i ++ ) {
             prefix[i] = ( prefix[i-1] + nums[i] ) ;
        }
        vector<int>result( queries.size() , 0 ) ;
        for ( int i = 0 ; i < queries.size() ; i ++  ) {
            int maxi = 0 ;
             for ( int j = 0 ; j < n ; j ++ ) {
                if ( prefix[j] <= queries[i] ) {
                     maxi = max( maxi , ( j - 0 + 1 ) ) ;
                }
             }
             result[i] = maxi ;
        }
        return result;
    }
};
