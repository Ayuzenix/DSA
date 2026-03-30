#include<bits/stdc++.h>
using namespace std;

// Problem : Delete the Mid of the Stack 
// Platform : GeeksforGeeks

class Solution {
  public:
    
    void solve ( stack <int> &s , int n , int lastIdx ) {
        
        if ( s.size () == lastIdx + 1 ) {
            s.pop() ;
            return ;
        }
        
        int y = s.top() ;
        s.pop() ;
        solve ( s , n , lastIdx ) ;
        s.push( y ) ;
        
    }
    
    void deleteMid(stack<int>& s) {
        
        int n = s.size () ;
        int lastIdx = ( n - 1 ) / 2 ;
        
        solve ( s , n , lastIdx ) ;
        
        return ;
        
    }
};
