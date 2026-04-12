#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 82 ( Div.2 )
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ;
    while( t -- ) {
          string str ;
          cin>>str ;
          int first = -1 ;
          int last = -1 ;
          int count = 0 ;
          for ( int i = 0 ; i < str.size() ; i ++ ){
              if ( str[i] =='1') {
                            if ( first ==-1){
                                 first = i ;          
                            }
                    last = i ;  
                    count ++ ;
              }          
          }
           int result ;
           if ( first != -1  && last != -1 ) {
           result = ( ( last - first + 1 ) - count ) ;
           }else {
            result = 0 ;
           }
          cout<<result<<endl ;
    }
    return 0 ;
}
