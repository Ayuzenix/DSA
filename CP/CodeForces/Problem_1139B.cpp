#include<bits/stdc++.h>
using namespace std ;

// Problem : Chocolates ( 1139B )
// Platform : Codeforces 

int main() {
              
    long long n ;  //--> representing the types of chocolates 
    cin>>n ;
    vector<long long>store(n) ;
    for ( int i = 0 ; i < n ; i ++ ){
         cin>>store[i] ;         
    }
    long long total = store[n-1] ;
    long long prev = store[n-1] ;
    for ( int i = n - 2 ; i >=0 ; i -- ) {
         if ( store[i] < prev ) {
             total = total + store[i] ;
             prev = store[i] ;
         } else if ( store[i] >= prev ) {
             if ( prev > 0 ){          
             total = total + ( prev - 1 ) ;
             }
             prev = ( prev - 1 ) ;
         }
    }
    cout<<total<<endl ;         
    return 0 ;           
}




