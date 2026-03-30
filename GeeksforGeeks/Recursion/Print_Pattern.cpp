#include<bits/stdc++.h>
using namespace std;

// Problem : Print Pattern 
// Platform : GeeksforGeeks

class Solution {
  public:
  
    void solve ( vector <int> &store , int n , int &prev , int &count  ) {
        
        if ( store.size()!= 0 && prev == n ) {
             store.push_back( prev ) ;
             return ;
        }
        
        store.push_back( n ) ;
        if ( n > 0 && count ==0  ) {
            solve ( store , n - 5 , prev , count ) ;
        } else {
            count ++;
            solve ( store , n + 5 , prev , count ) ;
        }
        
        return ;
    }
  
    vector<int> pattern(int n) {
        
        if ( n <= 0 ) {
            return { n } ;
        }
        
        vector <int> store = {} ;
        int prev = n ;
        int count =0 ;
        
        solve ( store , n , prev , count ) ;
        
        return store ;
        
    }
};
