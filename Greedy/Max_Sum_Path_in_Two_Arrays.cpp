#include<bits/stdc++.h>
using namespace std ;

// Problem : Max Sum Path in Two Arrays 
// Platform : GeeksforGeeks 

class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        int n = a.size() , m = b.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < m ; i ++ ) {
             mp[b[i]] ++ ;
        }
        int sum1 = 0 , sum2 = 0 , prev1 = 0 , prev2 = 0 , maxSum = 0 ;
        int l = 0 , r = 0 ;
        while ( l < n && r < m ) {
            sum1 = sum1 + a[l] ;
            if ( mp.find( a[l] ) != mp.end() ) {
                while ( r < m && b[r] != a[l] ) {
                    sum2 = sum2 + b[r] ;
                    r ++ ;
                }
                sum2 = sum2 + b[r] ;
                maxSum = maxSum + max( sum1 - prev1 , sum2 - prev2 ) ;
                prev1 = sum1 , prev2 = sum2 ;
                r ++ ;
            }
            l ++ ;
        }
        while ( l < n ) {
            sum1 = sum1 + a[l] ;
            l ++ ;
        }
        while ( r < m ) {
            sum2 = sum2 + b[r] ;
            r ++ ;
        }
        maxSum = maxSum + max( sum1 - prev1 , sum2 - prev2 ) ;
        return maxSum ;
    }
};
