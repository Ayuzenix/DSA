#include<bits/stdc++.h>
using namespace std ;

// Problem : String LCM ( 1473B )
// Platform : Codeforces 

int main() {
    
    int q ;
    cin>>q ;
    while ( q -- ) {
         string s , t ;
         cin>>s>>t ;
         int n = s.size() , m = t.size() ;
         int lcm = ( n * m ) / ( __gcd( n , m) ) ;
         string str1 = "" ;
         string str2 = "" ;
         for ( int i = 0 ; i < ( lcm / n ) ; i ++ ) {
               str1 = str1 + s ;        
         }
         for ( int i = 0 ; i < ( lcm / m ) ; i ++ ) {
               str2 = str2 + t ;         
         }
         if ( str1 == str2 ) {
             cout<<str1<<endl ;          
         }else{
             cout<<-1<<endl ;          
         }
                 
    }
             
   return 0 ;            
}
