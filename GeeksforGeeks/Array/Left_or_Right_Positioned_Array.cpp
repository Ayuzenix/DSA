#include<bits/stdc++.h>
using namespace std ;

// Problem : Left or Right Positioned Array 
// Platform : GeeksforGeeks

class Solution {
  public:
    bool leftRight(vector<int>& arr) {
        
         int n = arr.size() ;
         unordered_map<int,int>mp;
         for ( int i = 0 ; i < n ; i ++ ) {
             mp[ arr[i] ] ++ ;
         }
         for ( int i = 0 ; i < n ; i ++ ) {
             bool gama = true ;
             if ( mp[i] == 0 && mp[n-i-1] == 0) {
                 gama = false ;
             }else {
                if ( mp[i] == 0 && mp[n-i-1]!=0) {
                    mp[n-i-1] -- ;
                }else if ( mp[i]!=0 && mp[n-i-1] == 0) {
                    mp[i] -- ;
                }else {
                    mp[i] --;
                }
             }
             if ( gama == false ) {
                 return false ;
             }
         }
         return true ;
    }
};
