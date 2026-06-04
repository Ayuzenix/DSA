#include<bits/stdc++.h>
using namespace std ;

// Problem : BowWow and the Timetable 
// Platform : Codeforces 

int main() {
    
    string n ;
    cin>>n ;
    long long x = n.size() ;
    long long ones = 0 ;
    for ( int i = 0 ; i < x ; i ++ ) {
          if ( n[i] == '1') {
             ones ++ ;           
          }       
    }
    if (ones > 1 ) {
        cout<< ( x + 1 ) / 2 <<endl ;         
    }else {
        if ( x % 2 == 1 ) {
        cout<< ( ( x + 1 ) / 2 ) - 1 <<endl ;             
        }else {
        cout<< ( x + 1 ) / 2 <<endl ;              
        }
    }

    return 0 ;           
}
