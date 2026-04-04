#include<bits/stdc++.h>
using namespace std;

// Problem : Operating an Array 
// Platform : GeeksforGeeks 

class Solution {
  public:
    bool searchEle(vector<int>& arr, int x) {
        int n = arr.size() ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if( arr[i] == x ) {
                return true ;
            }
        }
        return false ;
    }

    void insertEle(vector<int>& arr, int y, int yi) {
         vector<int>store;
         for ( int i = 0 ; i < arr.size() ; i ++ ) {
              if ( i == yi) {
                  store.push_back( y ) ;
              }
              store.push_back( arr[i] ) ;
         }
         arr = store ;
    }

        
    void deleteEle(vector<int>& arr, int z) {
         vector<int>store;
         int count = 0 ;
         for ( int i = 0 ; i < arr.size() ; i ++ ) {
              if ( arr[i]  == z && count == 0 ) { // Means Leaving only first Occurence of ELement Z 
                   count ++ ;
                   continue; 
              }else {
                   store.push_back( arr[i] ) ;
              }
         }
         arr = store ;
    }
};
