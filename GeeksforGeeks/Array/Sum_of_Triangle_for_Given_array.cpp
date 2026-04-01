#include<bits/stdc++.h>
using namespace std;

// Problem : Sum of Triangle for Given Array 
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<int> getTriangle(vector<int>& arr) {
        
        vector<int>store = arr;
        reverse( store.begin() , store.end() ) ;
        vector<int>curr=arr;
        int maxi = 1e9 + 7 ;
        while ( curr.size() > 1 ) {
            vector<int>gama;
               for ( int i = curr.size() - 1 ; i>=1 ; i -- ) {
                    int x = curr[i] + curr[i-1] ;
                    store.push_back( x % maxi ) ;
                    gama.push_back( x % maxi ) ;
               }
               reverse( gama.begin() , gama.end() ) ;
               curr = gama ;
        }
        reverse( store.begin() , store.end());
        return store ;
        
    }
};
