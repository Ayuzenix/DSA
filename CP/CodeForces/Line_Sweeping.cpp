#include<bits/stdc++.h>
using namespace std ;

int main() {
    
    int n ;
    cin>>n ;
    vector<pair<int,int>>store ;
    for ( int i = 0 ; i < n ; i ++ ) {
         int a , b ;
         cin>>a>>b; 
         store.push_back({ a , b }) ;
    }
    int result = 0 ; 
    int mini = -1 ;
    for ( int i = 0 ; i < store.size() ; i ++ ) {
         result = result + ( store[i].second-store[i].first);
         if ( result > mini ) {
              mini = result ;          
         }
    }
    cout<<mini<<endl ;        
   return 0 ;            
}
