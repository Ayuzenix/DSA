#include<bits/stdc++.h>
using namespace std;

// Problem : Generate Permutation of an Array
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<vector<int>>result ;
    
    void solve ( vector<int>&arr , vector<int>store , int idx , int & n) {
        if ( idx == n ) {
            result.push_back( store ) ;
            return ;
        }
        for ( int i = idx ; i < n ; i ++ ) {
             swap( store[i],store[idx]) ; // Do
             solve( arr , store , idx + 1 , n ) ; // Recursive Calls
             swap( store[i],store[idx]) ; // Undo
        }
        return ;
    }
    
    vector<vector<int>> permuteDist(vector<int>& arr) {
        
           vector<int>store=arr;
           int n = arr.size() ;
           solve ( arr , store , 0 , n ) ;
           return result ;
    }
};
