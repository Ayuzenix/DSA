#include<bits/stdc++.h>
using namespace std ;

// Problem : Drinks Choosing ( 1195A ) 
// Platform : Codeforces 

int main() {
    
    long long n , k ;
    cin>>n>>k ;
    vector<int>store(k + 1) ;
    for ( int i = 0 ; i < n ; i ++ ) {
          int x ;
          cin>>x ;
          store[x] ++ ;
    }
    long long capacity = ceil( 1.0 * n / 2  ) ;
    long long even = 0 , odd = 0 , result = 0 ;
    for ( int i = 0 ; i < store.size() ; i ++ ) {
         if ( store[i] % 2 ==  0 ) {
              even = even + store[i]  ;
         }else {
              even = even + store[i] - 1  ;          
         }         
    }
    result = 2*min ( even / 2 , capacity ) ;
    capacity = capacity - min ( even / 2 , capacity ) ;
    result = result + capacity ;
    cout<<result<<endl ;
    return 0 ;          
}
