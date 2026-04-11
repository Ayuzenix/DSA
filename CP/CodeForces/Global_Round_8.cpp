#include<bits/stdc++.h>
using namespace std ;

// Problem : Global Round 8 
// Platform : Codeforces 


int main() {
    
    int t ; 
    cin>>t;
    while( t -- ) {
       int a , b , n ;
       cin>>a>>b>>n ;
       int operation = 0 ; 
       while( max( a , b ) <= n ){
             int mini = min( a , b ) ;
             int maxi = max ( a , b ) ;
             if ( mini == a ){
                 a = a + maxi ;
                 operation ++ ;
                 if ( a > n ){
                     break ;          
                 }
             }else if ( mini == b ){
                 b = b + maxi ;
                 operation ++ ;
                 if ( b > n ){
                     break ;           
                 }
             }
       }
       cout<<operation<<endl ;          
    }
    return 0 ;            
}
