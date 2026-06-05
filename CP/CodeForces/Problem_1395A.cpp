#include<bits/stdc++.h>
using namespace std ;

// Problem : Boboniu Likes to Color Balls 
// Platform : Codeforces 

int main() {
    
    long long t ;
    cin>>t ;
    while ( t -- ) {
       long long a , b , c , d , odd = 0 ;
       cin>>a>>b>>c>>d ;
       if ( a % 2 != 0 ) {
            odd ++ ;         
       }
       if ( b % 2 != 0 ) {
            odd ++ ;         
       }
       if ( c % 2 != 0 ) {
            odd ++ ;         
       }
       if ( d % 2 != 0 ) {
            odd ++ ;         
       }
       if ( odd <= 1 ) {
           cout<<"YES"<<endl ;           
       }else {
          if ( a > 0 && b > 0 && c > 0 ) {
              a = a - 1 ;
              if ( a % 2 != 0 ) {
              odd ++ ;         
            }else {
              odd -- ;           
            }
             b = b - 1 ;
             if ( b % 2 != 0 ) {
              odd ++ ;         
            }else {
              odd -- ;           
            }
             c = c - 1 ;
              if ( c % 2 != 0 ) {
              odd ++ ;         
              }else {
              odd -- ;           
            }
            d = d + 3 ;
            if ( d % 2 != 0 ) {
               odd ++ ;          
            }else{
               odd -- ;           
            }
          }
          if ( odd <= 1 ) {
              cout<<"YES"<<endl ;          
          }else{
              cout<<"NO"<<endl ;          
          }
       }
    }
               
    return 0 ;          
}
