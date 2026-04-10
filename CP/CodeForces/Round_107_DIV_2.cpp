#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 107 DIV 2.
// Platform : Codeforces 

int main() {
    
    int n , k , l , c , d , p , nl , np ; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np ;
    // for each nl ( mp of drink requies ) == total ml = k *l / each( nl)
    long long total_Drink = k * l ;
    long long n_total = total_Drink / nl ;
    long long total_lime = c * d ;
    long long total_salt = p / np ;
    long long ans = min ({n_total , total_lime , total_salt }) ;
    long long result = ans / n ;
    cout << result << endl ;
    return 0 ;
}
