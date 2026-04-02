#include<bits/stdc++.h>
using namespace std;

// Problem : Permutations II 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>>result ;
    void solve ( vector<int>&store , int idx , int &n ) {
         if ( idx == n) {
            result.push_back( store ) ;
            return ;
         }
         unordered_set<int>st;
         for (int i = idx ; i < n ; i ++ ) {
              if ( st.find(store[i]) !=st.end()){
                continue;
              }      
              st.insert( store[i] ) ;
              swap( store[i],store[idx]) ;
              solve ( store , idx + 1 , n ) ;
              swap( store[i],store[idx]) ;
         }
         return ;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n = nums.size() ;
        sort(nums.begin() , nums.end()) ;
        vector<int>store=nums ;
        solve ( store , 0 , n ) ;
        return result ;         
    }
};
