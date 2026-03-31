#include<bits/stdc++.h>
using namespace std;

// Problem : Unique K Number Sum 
// Platform : GeeksforGeeks

class Solution {
  public:
  
    vector<vector<int>>result ;
    
    bool isSum( vector<int> store , int n ) {
         int sum = 0 ;
         for ( int i = 0 ; i < store.size() ; i ++ ) {
             sum = sum + store [i] ;
         }
         return (sum == n ) ;
    }
    
    void solve ( vector<int> & nums , vector<int> & store , int idx , int & n , int & k ){
        
         if ( idx > nums.size() || store.size() > k ) {
             return ;
         }
         if( store.size() == k ) {
              if ( isSum( store , n ) == true ) {
                  result.push_back( store ) ;
              }
              return ;
         }
         
         store.push_back( nums[idx] ) ;
         solve ( nums , store , idx + 1 , n , k ) ;
         store.pop_back() ;
         solve ( nums , store , idx + 1 , n , k ) ;
    }
  
    vector<vector<int>> combinationSum(int n, int k) {
        
       vector<int>nums={1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
       vector<int>store ;
       int idx = 0 ;
       solve ( nums , store , idx , n , k ) ;
       return result ;
    }
};
