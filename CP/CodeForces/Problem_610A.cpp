#include<bits/stdc++.h>
using namespace std ;

// Problem : Pasha and Stick ( 610A ) 
// Platform : Codeforces 

int main() {
    
    int n ;
    cin>>n ;
    if( n % 2 != 0 ) {
       cout<<0<<endl ;          
    }else {
       if ( n % 4 == 0 ) {
          cout<<( n / 4) - 1 <<endl ;           
       }else {
          cout<<( n / 4 )<<endl ;           
       }          
    }
             
   return 0 ;           
}
