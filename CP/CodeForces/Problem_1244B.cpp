#include<bits/stdc++.h>
using namespace std ;

// Problem :  Rooms and Staircases ( 1244B ) 
// Platform : Codeforces 

int main() {
    int t ; 
    cin>>t ;
    while ( t -- ){
       int n ;
       cin>>n ;
       string str ;
       cin>>str;
       int count = -1 ;
       if (str[0] =='1' || str[n-1]=='1'){
           count = 2*n ;           
       }else {
         int x = -1 ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( str[i] =='1'){
                  x = ( i + 1 ) ; 
                  int curr = max( ( x - 1 ) , ( n - x  )  ) ;
                  count = max( count ,  2 * ( curr + 1 ) ) ;
              }         
         }
         if ( x == -1 ){
             count = n ;
         }
       }
       cout<<count<<endl ;
    }
    return 0 ;
}
