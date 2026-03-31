#include<bits/stdc++.h>
using namespace std ;

// Problem : Juggler Sequence 
// Platform : GeeksforGeeks 

class Solution {
  public:
  
    void solve ( vector< long long > &result , long long n ) {
        
         if ( n == 1 ) { // Base Condition
             result.push_back( 1 ) ;
             return ; 
         }
         
         result.push_back( n ) ;
         if ( n % 2 == 0) { // Recursive Work 
             solve ( result , sqrt ( n ) ) ;
         }else {
               long long curr =  n * sqrt ( n ) ;
               solve ( result , curr ) ;
         }
        
        return ;
    }
  
    vector<long long> jugglerSequence(long long n) {
        
        vector< long long >result ;
        
        solve ( result , n ) ;
        
        return result ;
            }
};
