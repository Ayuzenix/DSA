#include<bits/stdc++.h>
using namespace std ;

// Problem : Hello 2019 
// Platform : Codeforces 

int main () {
    
    string str ;
    cin>>str ;
    vector<string>store( 5 ) ;
    for ( int i = 0 ; i < 5 ;  i ++ ) {
         cin >> store[i] ;      
    }
     bool gama = true ;
    for ( int i = 0 ; i < 5 ; i ++ ) {
         string curr = store[i] ;
         if ( ( curr[0] == str[0] || curr[0] == str[1] || curr[1] == str[0] || curr[1] == str[1])){
               gama = false ;
               break ;
         }
    }
     if ( gama == false ) {
            cout<<"YES" <<endl ;
         } else {
            cout<<"NO" <<endl ;
         }

   return 0 ;          
}
