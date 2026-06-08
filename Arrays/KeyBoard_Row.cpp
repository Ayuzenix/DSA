#include<bits/stdc++.h>
using namespace std ;

// Problem : KeyBorad Row 
// Platform : Leetcode 

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
         int n = words.size() ;
         vector<string>result ;
         for ( int i = 0 ; i < n ; i ++ ) {
              unordered_map<char , int > mp ; 
              string curr = words[i] ;
              for ( int i = 0 ; i < curr.size() ; i ++ ) {
                   if ( curr[i] >='A' && curr[i] <='Z') {
                       mp[( curr[i] + 32)] ++ ; 
                   } else {
                       mp[curr[i]] ++ ;
                   }
              }
              int fr = 0 , sr = 0 , tr = 0 ;
              for ( auto & it: mp ) {
                   if ( it.first == 'q' || it.first =='w' || it.first =='e' || it.first =='r' || it.first =='t' || it.first =='p' || it.first =='o' || it.first =='i' || it.first =='u' || it.first =='y' ) {
                      fr ++ ;
                   } else if ( it.first == 'a' || it.first == 's' || it.first == 'd' || it.first == 'f' || it.first == 'l' || it.first == 'k' || it.first == 'j' || it.first == 'g' || it.first == 'h' ) {
                    sr ++ ;
                   }else {
                    tr ++ ;
                   }
              }
              if ( ( fr == 0 && sr == 0 ) ||
                   ( sr == 0 && tr == 0  ) ||
                   ( fr == 0 && tr == 0 ) ) {
                    result.push_back(curr) ;
                   }
         }
         return result ;
    }
};
