#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Integers to Choose From a Range I 
// Platform : Leetcode 

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int m = banned.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < m ; i ++ ) {
             mp[banned[i]] ++ ;
        }
        long long sum = 0 , numberOfIntegers = 0;
        for ( int i = 1 ; i <= n ; i ++ ) {
              if ( ( sum + i ) > maxSum ) {
                  break ;
              }
              if ( mp.find( i ) == mp.end() ) {
                  sum = sum + i ;
                  numberOfIntegers ++ ;
              }
        }
        return numberOfIntegers ;
    }
};
