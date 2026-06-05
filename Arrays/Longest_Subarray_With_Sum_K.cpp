#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Subarray With Sum K 
// Platform : TakeUForward

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size() , maxi = 0 ;
        unordered_map<int , int >mp ;
        int sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            sum = sum + nums[i] ;
            if ( sum == k ) {
                maxi = ( i + 1 ) ;
            }
            if ( mp.find( sum - k ) != mp.end()) {
                maxi = max( maxi , ( i - mp[ sum - k ] ) ) ;
            }
            if ( mp.find( sum ) == mp.end() ) {
                mp[sum] = ( i ) ;
            }
        }
        return maxi ;
    }
};

