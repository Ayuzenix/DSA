#include<bits/stdc++.h>
using namespace std ;

// Problem : Domino piling ( 50A ) 
// Platform : Codeforces 

int main() {
    int m , n ;
    cin>>m>>n ;
    int count = 0 ; 
    if ( n % 2 == 0 ) { // if Number of Column is even 
        count = ( m * n ) / 2 ; // All gets cover as number of column is even which eventually covers  by 2 * 1 Dominos           
    }else { // if Number of Column is odd 
        for ( int i = 1 ; i <=m ; i ++ ) {
             count = count + ( n / 2 ) ;       
        } 
        count = count + ( m / 2 ) ; // Need to additionally add that row domino Number 
    }
    cout<<count<<endl ;          
    return 0 ;          
}
