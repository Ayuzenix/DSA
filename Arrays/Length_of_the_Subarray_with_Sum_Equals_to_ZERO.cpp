#include<bits/stdc++.h>
using namespace std ;

// Problem : Largest Subarray with Sum 0
// Platform : TakeUForward

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size() ;
        unordered_map<int,int>mp ;
        mp[0] = -1 ;
        int sum = 0 ;
        int ans = 0 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
            sum = sum + arr[i] ;
            if ( mp.find(sum-0)!=mp.end() ) {
                 ans = max(ans , ( i - mp[sum-0] ) ) ;
            }else{
                mp[sum] = i ;
            }
        }
        return ans ;
    }
};
