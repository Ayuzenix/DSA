#include<bits/stdc++.h>
using namespace std ;

// Problem : Print 1 to n Without Using Loops 
// Platform : GeeksforGeeks

class Solution {
  public:
    
    void solve ( int n , int i ) {
         if( i > n ) {
             return ;
         }
         
         cout << i << " " ;
         solve( n , i + 1 ) ;
          
         return ;
    }
    
    void printTillN(int n) {
         solve( n , 1 ) ;
         
         return ;
       
    }
};

