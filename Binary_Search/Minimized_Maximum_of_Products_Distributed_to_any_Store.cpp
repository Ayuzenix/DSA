#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimized Maximum of Products Distributed to Any Store 
// Platform : Leetcode 

class Solution {
public: // at most one product type ( means Zero can also be given to this )
    int toCount ( vector<int>& quantities , int mid   ) {
        int count = 0 ;
        for (int i = 0 ; i < quantities.size() ; i ++ ) {
             if ( quantities[i] % mid != 0 ) {
                count = count + quantities[i] / mid + 1 ;
             }else {
                count = count + quantities[i] / mid ; 
             }
        }
        return count ;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1 , high = *max_element( quantities.begin() , quantities.end() ) ;
        int ans = high ;
        while ( low <= high ) { 
            int mid = ( low + high ) / 2 ;
            if ( toCount( quantities , mid ) <= n  ) {
                 ans = min( ans , mid ) ;
                 high = mid - 1 ;
            }else if ( toCount( quantities , mid ) > n ) {
                 low = mid + 1 ;
            } 
        }
        return ans ;
    }
};
