#include<bits/stdc++.h>
using namespace std ;

// Problem : Floor Number ( Problem 1426A ) 
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ){
        int n , x ; 
        cin>>n>>x ;
        int count = 1 ;
        n = n - 2 ;
        while ( n > 0 ) {
               n = n - x ;
               count ++ ;
        }
        cout<<count<<endl ;
               
    }
           
   return 0 ;           
}
