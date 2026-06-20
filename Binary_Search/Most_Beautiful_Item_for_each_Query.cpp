#include<bits/stdc++.h>
using namespace std ;

// Problem : Most Beautiful Item for Each Query 
// Platform : Leetcode 

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size() ; 
        sort ( items.begin() , items.end() ) ;
        vector<int>store_max( n ) ;
        vector<int>result ;
        int curr = items[0][1] ;
        for( int i = 0 ; i < n ; i ++ ) {
            curr = max( curr , items[i][1] ) ;
            store_max[i] = curr ;
        }
        for ( int i = 0 ; i < queries.size() ; i ++ ) {
             int low = 0 , high = n - 1 , maxi = 0 ;
             while ( low <= high ) {
                int mid = ( low + high ) / 2 ;
                if ( items[mid][0] <= queries[i] ) {
                    maxi = max( maxi , store_max[mid] ) ;
                    low = mid + 1 ;
                } else {
                    high = mid - 1 ;
                }
             }
             result.push_back( maxi ) ;
        }
        return result ;
    }
};
