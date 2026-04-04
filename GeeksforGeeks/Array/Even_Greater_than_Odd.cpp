#include<bits/stdc++.h>
using namespace std ;

// Problem : Even Greater Than Odd
// Platform : GeeksforGeeks 

class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        sort ( arr.begin() , arr.end() ) ;
        for ( int i = 1 ; i < arr.size() ; i ++ ) {
             if ( (i + 1 ) % 2 == 0 ) {
                 if ( arr[i]<arr[i-1]) {
                     swap( arr[i], arr[i-1] ) ;
                 }
             }else {
                 if ( ( i + 1 ) % 2 !=0 ) {
                     if ( arr[i] > arr[i-1]) {
                         swap ( arr[i] , arr[i-1] ) ;
                     }
                 }
             }
        }
        return arr ;
    }
};
