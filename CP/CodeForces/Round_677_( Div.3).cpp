#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 677 ( Div.3 )
// Platform : Codeforces 

int main () {
       
       int t ;
       cin>>t ;
       while ( t -- ) {
             int n ; 
             cin>>n ;
             int digit = 0 ;
             int unit ;
             while ( n > 0 ) {
                   unit = n % 10 ;
                   digit ++ ;
                   n = n / 10 ;
             }
             int count = 0 ;
             for ( int i = 1 ; i <= 4; i ++ ) {
                   if ( i <= digit ) {
                        count = count + ( unit * i ) ;       
                   }else {
                        count = count + ( ( unit - 1 ) * i ) ;        
                   }      
             }
             cout<<count<<endl ;
       }
       return 0 ;
}
