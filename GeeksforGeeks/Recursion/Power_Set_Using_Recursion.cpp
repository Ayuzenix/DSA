#include<bits/std++.h>
using namespace std ;

// Problem : Power Set Using Recursion 
// Platform : GeeksforGeeks

class Solution {
  public:
    void solve ( vector < string > &result , string store , int idx , int n , string &s ) {
         
         if ( idx == n ) {
              result.push_back( store ) ;
              return ;
         }
         
         store = store + s[idx] ;
         solve ( result , store , idx + 1 , n , s ) ; // Taking an Element in string 
         store.pop_back() ;
         
         solve ( result , store , idx + 1 , n , s ) ; // Not Taking any Element in string 
         
         
    }
    vector<string> powerSet(string s) {
        
       vector < string > result ;
       string store="" ;
       
       int n = s.size() ;
       solve ( result , store , 0 , n , s ) ;
       return result ; 
       
    }
};
