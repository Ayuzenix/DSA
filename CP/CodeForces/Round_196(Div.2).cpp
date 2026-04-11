#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 196 ( Div.2 ) 
// Platform : Codeforces 

int main() {
              
    string str ;
    cin>>str ;
    int c_ones = 0 ; 
    int c_twos = 0 ;
    int c_threes = 0 ;
    for ( int i = 0 ; i < str.size() ; i ++ ) {
         if ( str[i] =='1') {
                 c_ones ++ ;
         }else if ( str[i] =='2'){
                 c_twos ++ ;      
         }else if ( str[i] == '3'){
                 c_threes ++ ;     
         }     
    }
    string result = ""  ;
    while ( c_ones > 0 ){
          result = result + '1' + '+' ;
          c_ones -- ;
    }
    while ( c_twos > 0 ){
          result = result + '2' + '+' ;
          c_twos -- ;
    }
    while ( c_threes > 0 ){
          result = result + '3' + '+' ;  
            c_threes -- ;
    }
    string ans = result.substr( 0 , result.size() - 1 ) ;
    cout<<ans<<endl ;
    return 0 ;
              
}
