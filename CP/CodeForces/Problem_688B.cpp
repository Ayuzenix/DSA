#include<bits/stdc++.h>
using namespace std ;

// Problem : Lovely Palindromes ( 688B ) 
// Platform : Codeforces 

int main() {
    string str ;
    cin>>str ;
    string first = str ;
    reverse( str.begin() , str.end() ) ;
    string final_str = str ;
    cout<<(first + final_str)<<endl ;
   return 0 ;           
}
