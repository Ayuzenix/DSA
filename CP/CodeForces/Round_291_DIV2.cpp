#include<bits/stdc++.h>
using namespace std ;

// Problem: Codeforces Round 291 DIV.2
// Platform : Codeforces 

int main() {
    
    int x ;
    cin>>x;
    vector<int>store;
    while( x > 0 ){ 
          int digit = x % 10;
          store.push_back( digit ) ;
          x = x / 10 ;
    }
    reverse( store.begin() , store.end() ) ;
    int count = 0 ;
    for ( int i = store.size()-1 ; i>=0 ; i -- ){
        count ++ ;
            int t = 9 - store[i];
            if ( t < store[i] ){
                if ( t == 0  && count ==store.size() ){
                    continue ; 
                }  else {
                    store[i] = t ;
                }   
            }
    }
    int pow = 1 ;
    int result = 0 ;
    for ( int i = store.size()-1 ; i >=0 ; i--){
         result = result + store[i]*pow ;
         pow = pow * 10 ;
    }
    cout<<result<<endl;
    return 0 ;           
}
