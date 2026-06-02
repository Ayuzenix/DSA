#include<bits/stdc++.h>
using namespace std ;

// Problem : Collecting Coins ( Problem 1294A ) 
// Platform : Codeforces 

int main() {
    int t ;
    cin>>t ;
    while ( t -- ) {
        int a , b , c , n ; 
        cin>>a>>b>>c>>n ;
        int num = ( n - ( 2*b) + ( a + c ) ) ;
        int x1 = ( n - 2*a + ( b + c ) ) ;
        int x3 = ( n - 2*c + ( a + b ) ) ;
        if ( num % 3 == 0 && num >= 0 && x1 % 3 == 0 && x1 >= 0 && x3 % 3 == 0 && x3 >= 0 ) {
             cout<<"YES"<<endl ;           
        }else {
             cout<<"NO"<<endl ;        
        }
    }
    return 0 ;           
}
