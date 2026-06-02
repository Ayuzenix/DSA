#include<bits/stdc++.h>
using namespace std ;

// Problem : Even Array ( Problem 1367B ) 
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ;
    while ( t -- ) {
        int n ; 
        cin>>n ;
        vector<int>store(n) ;
        int ep = 0 , op = 0 ;
        for( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;
            if ( i % 2 == 0 && store[i] % 2 != 0 ) {
                ep ++ ;
            }else if ( i % 2 != 0 && store[i] % 2 == 0 ) {
                op ++ ;
            }
        }
        if ( ep != op ) { 
            cout<<-1<<endl ; // Cannot be balanced in such cases 
        } else {
            cout<< ( ep + op ) / 2 <<endl ; // Can be balanced by swapping in pairs 
        }
    }

    return 0 ;
}

