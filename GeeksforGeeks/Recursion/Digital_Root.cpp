#include<stdio.h>
using namespace std;

// Problem : Digital Roots
// Platform : GeeksforGeeks 

class Solution {
  public:
  
  
   int  solve ( int n ) {
        
        if ( n <= 9 ) {
             return n ;
        }
        int sum = 0 ;
        while ( n > 0 ) {
             sum = sum + n % 10 ;
             n = n / 10 ;
        }
        n = sum ;
        return solve ( n ) ;
        
   }
   
  
    int digitalRoot(int n) {
        
        int ans = solve ( n ) ;
         return ans ;
        
    }
};
