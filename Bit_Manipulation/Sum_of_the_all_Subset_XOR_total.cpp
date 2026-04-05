#include<bits/stdc++.h>
using namespace std ;

// Problem : Sum of the all Subset XOR total 
// Platform : Leetcode

class Solution {
public:
    int result = 0 ;
    void solve ( vector<int>& nums , vector<int> &store ,int & n , int idx ) {
        
         if ( idx == n ) {
             int gama = 0 ;
             for ( int i = 0 ; i < store.size() ; i ++ ) {
                 gama = ( gama ^ store[i] ) ;
             }
             result = result + gama ;
             return ;
         }
         
         store.push_back( nums[idx] ) ; // When Picking an Element Up 
         solve ( nums , store , n , idx + 1 ) ;
         store.pop_back() ;

         solve ( nums , store , n , idx + 1 ) ; // When Leaving an Element

    }

    int subsetXORSum(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>store ; 
        solve ( nums , store , n , 0 ) ;
        return result ;
    }
};
