#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 663 ( Div.2 )
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ;
    while ( t -- ) {
          
          int n , m ; 
          cin>>n>>m ;
          char arr[n][m] ;
          for ( int i = 0 ; i < n ; i ++ ) {
               for ( int j = 0 ; j < m ; j ++ )  {
                     cin>>arr[i][j] ;       
               }       
          }
          int count = 0 ;
          for ( int i = 0 ; i < n ; i ++ ) {
               for ( int j = 0 ; j < m ; j ++ ) {
                    if ( j == m - 1 && arr[i][j] == 'R'){
                        count ++ ;          
                    } 
                    if ( i == n - 1 && arr[i][j] == 'D'){
                        count ++ ;          
                    }
                   
               }        
          }
          cout<<count<<endl ;
    }
    return 0 ;
}
