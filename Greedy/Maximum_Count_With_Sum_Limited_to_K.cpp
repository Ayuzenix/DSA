#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Count With Sum Limited to K 
// Platform : GeeksforGeeks 

class Solution {
  public:
    int toyCount(vector<int> arr, int k) {
        int n = arr.size() ;
        sort( arr.begin() , arr.end() ) ;
        int count = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             k = k - arr[i] ;
             if ( k < 0 ) {
                 break ;
             }
             count ++ ;
        }
        return count ;
    }
};
