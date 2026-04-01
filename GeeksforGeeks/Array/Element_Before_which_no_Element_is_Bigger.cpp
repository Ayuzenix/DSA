#include<bits/stdc++.h>
using namespace std;

// Problem : Element Before which no element is bigger 
// Platform : GeeksforGeeks

class Solution {
  public:
    int countElements(vector<int>& arr) {
        
        int n = arr.size() ;
        int maxi = arr[0] ;
        int count = 1 ; 
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( arr[i] > maxi ) {
                count ++ ;
                maxi = arr[i] ;
            }
        }
        return count ;
    }
};

