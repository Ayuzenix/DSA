#include<bits/stdc++.h>
using namespace std ;

// Problem : Balanced Rating Changes ( Problem 1237A ) 
// Platform : Codeforces 

int main() {
    
    int n ; //--> Denoting the number of participants 
    cin>>n ; 
    vector<int>store(n) ; //--> Will store the overall change to ith candidate
    for ( int i = 0 ; i < n ; i ++ ) {
         cin>>store[i] ;         
    }
    // sort( store.begin() , store.end() ) ;
    vector<int>result = store ;
    int pos = 0 , neg = 0 ;
    for ( int i = 0 ; i < n ; i ++ ) {
         if( store[i] < 0 ) {
             neg = neg +  ( store[i] / 2 ) ;
             result[i] = store[i] / 2 ;
         } 
         if ( store[i] > 0 ) {
             pos = pos + ( store[i] / 2 ) ;
             result[i] = store[i] / 2 ;
         }
    }
    int remain = ( pos + neg ) ;
    if ( remain > 0 ) {
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( store[i] < 0 && ( store[i] % 2 !=0 ) ) {
                   result[i] = result[i] - 1 ;
                   remain -- ;
              }
              if ( remain == 0 ) {
                   break ;          
              }
         }       
    }
    if ( remain < 0 ){
         for ( int i = 0 ; i < n ; i ++ ){
              if ( store[i] > 0 && ( store[i] % 2 !=0 ) ) {
                   result[i] = result[i] + 1 ;
                   remain ++ ;
              }
              if ( remain == 0 ) {
                   break ;          
              }
         }        
    }
    
    // Printing final changes in points and printing in desired manner 
    for ( int i = 0 ; i < n ; i ++ ) {
          cout<<result[i]<<endl ;        
    }
   
   return 0 ;           
}


