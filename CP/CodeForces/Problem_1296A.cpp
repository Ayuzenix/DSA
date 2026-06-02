#include<bits/stdc++.h>
using namespace std ;

// Problem : Array with Odd Sum ( Problem 1296A ) 
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ;
    while ( t -- ) {
        int n ;
        cin>>n ; 
        vector<int>store(n) ;
        int sum = 0 , even = 0 , odd = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             cin>>store[i] ;
             sum = sum + store[i] ;
             if ( store[i] % 2 == 0) {
                 even ++ ;          
             }else {
                 odd ++ ;           
             }
        }
        if ( sum % 2 !=0 ) { // When Sum is odd 
            cout<<"YES"<<endl ;         
        }else { // When Sum is even 
            if ( odd != 0 && even !=0 ) {
             cout<<"YES"<<endl ;             
            }else {
             cout<<"NO"<<endl ;           
            }           
        }
    }
          
    return 0 ;          
}
