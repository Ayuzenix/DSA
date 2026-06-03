#include<bits/stdc++.h>
using namespace std ;

// Problem : Dice Tower ( 1266B ) 
// Platform : Codeforces 

int main() {
              
    long long t ;
    cin>>t ;
    while ( t -- ){
      
      long long a ;
      cin>>a ;
      if( ( a > 14 ) && ( a % 14 >=1 )  && ( a % 14 <= 6 )  ) {
           cout<<"YES"<<endl ;        
      }else {
           cout<<"NO"<<endl ;         
      }
    }
              
              
   return 0 ;            
}
