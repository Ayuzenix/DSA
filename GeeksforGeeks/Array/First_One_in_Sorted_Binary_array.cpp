#include<bits/stdc++.h>
using namespace std;

// Problem : First One in Sorted Binary Array 
// Platform : GeeksforGeeks

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
       
        int n = arr.size() ;
        int low = 0 ;
        int high = n - 1 ;
        int ans = INT_MAX;
        while ( low<= high ) {
            int mid = ( low + high ) / 2 ;
            if ( arr[mid] == 1 ) {
                ans = min( ans , mid ) ;
                high = mid - 1 ;
            }else if ( arr[mid] == 0 ) {
                low = mid + 1 ;
            }
        }
        if ( ans == INT_MAX ) {
            return -1 ;
        }
        return ans ;
    }
};
