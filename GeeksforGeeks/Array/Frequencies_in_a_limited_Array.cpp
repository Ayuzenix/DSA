#include<bits/stdc++.h>
using namespace std ;

// Problem : Frequencies in a Limited Array 
// Platform : GeeksforGeeks

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {

        int n = arr.size() ;
        sort ( arr.begin() , arr.end() ) ;
        vector<int>store ;
        int l = 1 ;
        int i = 0 ;
        while ( l <= n ) {
               int count = 0 ;
               while( i < n && l == arr[i] ) {
                     i ++ ;
                     count ++ ;
               }
               store.push_back( count ) ;
               l++ ;
        }
        return store ;
    }
};
