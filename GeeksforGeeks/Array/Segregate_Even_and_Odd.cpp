#include<bits/stdc++.h>
using namespace std;

// Problem : Segregate Even and Odd 
// Platform : GeeksforGeeks

class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        
         int n = arr.size() ;
         sort( arr.begin() , arr.end() ) ;
         int l = 0 ;
         int r = 0 ;
         while( r < n ) {
             if ( arr[r] % 2 == 0) {
                 swap( arr[l] , arr[r]) ;
                 l++;
             }
             r++;
         }
         sort( arr.begin() + l , arr.end() ) ;
        return ;
    }
};
