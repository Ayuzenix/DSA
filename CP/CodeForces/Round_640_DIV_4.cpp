#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 640 ( DIV. 4 )
// Platform : Codeforces 

int main () {
    int t ;
    cin>>t ;
    while ( t -- ){
    int n ; 
    cin>>n;
    vector<pair<int,int>>store ;
    int pow = 1 ;
    int count = 0 ;
    while ( n > 0 ){
          int rem = n % 10 ;
          store.push_back({ rem , pow }) ;
          if ( rem * pow != 0 ) {
               count ++ ;
          }
          n = n / 10 ;
          pow = pow * 10 ;
    }
    cout<<count<<endl;
    for ( auto & it : store) {
         int x = it.first * it.second ;
         if ( x ==0 ){
             continue ;
         }else {
             cout<<x<<" " ; 

         }
    }   
    cout<<endl;
}    
    return 0 ;          
}
