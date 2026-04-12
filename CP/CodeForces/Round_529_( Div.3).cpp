#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 529 ( Div.3 )
// Platform : Codeforces 

int main() {
    
    int n ;
    cin>>n;
    string str ;
    cin>>str ;
    string result = "" ;
    int count = 0 ;
    int l = 0 ;
    int prev = 0 ;
    int r = 0 ;
    while ( l < str.size() ) {
           if( r < str.size() ) {
           result = result + str[r] ;
           }
           l = prev + 1 ;
           r = r + l ;
           prev ++ ; 
    }
    cout<<result<<endl ;
    return 0 ;
}
