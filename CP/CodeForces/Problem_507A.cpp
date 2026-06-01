#include<bits/stdc++.h>
using namespace std ;

// Problem : Amr and Music ( Problem 507A ) 
// Platform : Codeforces 

int main() {
    int n , k ;
    cin>>n>>k ;
    vector<int>store(n) ; // Time taking to learn each instruments 
    for ( int i = 0 ; i < n ; i ++ ) {
         cin>>store[i] ;           
    }
    vector<int>dp = store ;
    vector<int>result ;
    sort ( dp.begin() , dp.end() ) ;
    int count = 0 , l = 0 ;
    while ( k > 0 ) {
           if ( l < n ) {
           k = k - ( dp[l] ) ;
           }else {
               break ;          
           }
           if ( k < 0 ) {
                break ;         
           }
           for ( int i = 0 ; i < n ; i ++ ) {
                 if ( store[i] == dp[l] ) {
                     result.push_back( i + 1 ) ;
                     store[i] = -1 ;
                     break ; // stop here for preventing duplicate indices cases 
                 }         
           }
           count ++ ;
           l ++ ;
    }
    if ( count == 0 ) {
         cout<<count<<endl ;        
    }else {
         sort(result.begin() , result.end()  ) ;
         cout<<count<<endl ;
         for ( int i = 0 ; i < result.size() ; i ++ ) {
              cout<<result[i]<<" " ;         
         }
    }
   return 0 ;           
}
