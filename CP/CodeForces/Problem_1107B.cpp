#include<bits/stdc++.h>
using namespace std ;

// Problem : Digital root ( 1107B ) 
// Platform : Codeforces 

int main() {
    
    long long n ;
    cin>>n ;
    while ( n -- ) {
       long long k , x ;
       cin>>k>>x ;
       long long till = ( 9 * k ) ;
       long long from = ( till - 9 + 1 ) ;
       long long result = from + ( x - 1 ); // Just Entirely Based on observation 
       cout<<result<<endl ;          
    }
          
    return 0 ;          
}
