#include<bits/stdc++.h>
using namespace std ;

// Problem : Shuffle Hashing ( 1278A )
// Platform : Leetcode 

int main() {
    
    int t ;
    cin>>t ;
    while ( t -- ) {
          string str1 ; 
          cin>>str1 ;
          string str2 ;
          cin>>str2 ;
          int l = 0 , r = 0 ;
          unordered_map<int,int>mp1 ; 
          for ( int i = 0 ; i < str1.size() ; i ++ ) {
               mp1[str1[i]] ++ ;        
          }
          bool gama = true ;
          sort(str1.begin() , str1.end() ) ;
          unordered_map<int,int>mp2 ;
          while ( r < str2.size() ) {
              mp2[str2[r]] ++ ;
              while ( mp2[str2[r]] > mp1[str2[r]] ) {
                      mp2[str2[l]] -- ;
                      l ++ ;
              }
              if( mp2[str2[r]] == mp1[str2[r]] ) {
                  string str3 = str2.substr( l , ( r - l + 1 ) ) ;
                  sort( str3.begin() , str3.end() ) ;
                  if ( str3 == str1 ){
                      gama = false ;
                      break ;
                  }
              } 
              r ++ ;
          }
          if ( gama ==true ) {
          cout<<"NO"<<endl ;
          }else {
            cout<<"YES"<<endl ;
          }
    }
    return 0 ;          
}


