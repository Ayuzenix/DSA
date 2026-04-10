#include<bits/stdc++.h>
using namespace std ;

// Problem : Bit++
// Platform: codeForces

int main () {
    int n ; 
    cin>>n;
    int x = 0 ;
    int plus = 0 ;
    int minues = 0 ;
    vector<string>str(n);
    for ( int i = 0 ; i < n ; i ++ ){
         cin>>str[i] ;       
    }
    for ( int i = 0 ; i < n ; i ++ ){
         string gama = str[i];
         if ( gama[1] =='+')  {
            x++;
         } else if( gama[1] =='-'){
            x--;
         }
    }
    cout<<x<<endl;
              
} 
