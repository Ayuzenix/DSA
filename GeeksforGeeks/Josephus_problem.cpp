#include<bits/stdc++.h>
using namespace std ;

// Problem : Josephus Problem 
// Platform : GeeksforGeeks

class Solution {
  public:
  
    int solve ( vector<int> & store , vector<int> & result ,  int & count , int n , int k ) {
        if ( k == 1 ) {
            return n ;
        }
        if ( store.size () ==1 ) {
            return (store[0]) ;
        }
        
        result.clear() ;
        
        for ( int i =0 ; i < store.size() ; i ++) {
             count ++;
             if (count == k ) {
                 count = 0 ;
                 continue ;
             }else {
                 result.push_back( store[i] ) ;
             }
        }
        store = result ;
        
        return solve ( store , result , count , n , k ) ;
        
    }
  
    int josephus(int n, int k) {
        
        vector <int> store ;
        vector <int> result ;
        for (int i = 1 ; i <= n ; i ++ ) {
            store.push_back(i) ;
        }
        int count = 0 ;
        int ans = solve ( store , result , count , n , k ) ;
        return ans ;
        
    }
};
