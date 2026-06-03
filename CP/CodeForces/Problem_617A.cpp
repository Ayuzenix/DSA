#include<bits/stdc++.h>
using namespace std ;

// Problem : Elephant ( Problem 617A ) 
// Platform : Codeforces 

int main() {
              
    int x ;
    cin>>x ;
    int count = 0 ;
    while ( x > 0 ) {
       if( x <=5 ) {
           count ++ ;
           break ;
       }else {
           x = x - 5 ;
           count ++ ;
       }           
    }
    cout<<count<<endl ;
   return 0 ;           
}
