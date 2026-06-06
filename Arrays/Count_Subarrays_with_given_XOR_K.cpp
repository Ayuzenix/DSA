#include<bits/stdc++.h>
using namespace std ;

// Problem : Count subarrays with given xor K
// Platform : TakeUForword

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int count = 0 ;
        int n = nums.size() ; 
        int xr = 0 ;
        unordered_map<int,int>mp ;
        mp[0] = 1 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            xr = ( xr ^ nums[i] ) ;
            if ( mp.find( ( xr ^ k ) ) != mp.end() ) {
                count = count + mp[ ( xr ^ k ) ] ;
            }
            mp[xr] ++ ;
        }
        return count ;
    }
};
