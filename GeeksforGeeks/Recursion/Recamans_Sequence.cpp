#include<bits/stdc++.h>
using namespace std ;

// Problem : Recamans Sequence 
// Platform : GeeksforGeeks 

// User function Template for C++

class Solution {
  public:
  
    void solve ( unordered_map < int , int > mp , vector < int > store , int n , int i) {
         int ans ;
         if ( i == n ) {
              return ;
         }
         if ( i == 0 ) {
             store.push_back(0);
             mp[0]++;
         }
         int prev = store.back() ;
         int curr = prev - i ;
         if( curr > 0 && mp.find( curr ) == mp.end() ) {
              store.push_back( curr ) ;
              mp[ curr ] ++ ;
         } else {
              store.push_back( prev + i ) ;
              mp[ prev + i ] ++;
         }
         
         return ;
         
    }
  
    vector<int> recamanSequence(int n) {
       
       unordered_map < int , int > mp ;
       vector < int > store ;
       solve ( mp , store , n , 0 ) ;
       return store ; 
    }
};
