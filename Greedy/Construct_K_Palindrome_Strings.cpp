#include<bits/stdc++.h>
using namespace std ;

// Problem : Construct K Palindrome Strings  
// Platform : Leetcode 

class Solution {
public:
    bool canConstruct(string s, int k) {
         int n = s.size() ;
         unordered_map<char,int>mp ;
         for ( int i = 0 ; i < n ; i ++ ) {
              mp[s[i]] ++ ;
         }
         int oddCount = 0 , evenCount = 0 , totalSubarray = 0 ;
         for ( auto & it:mp ) {
            if ( ( ( it.second ) % 2 ) != 0 ) {
                oddCount ++ ;
            } else {
                evenCount ++ ;
            }
            totalSubarray = totalSubarray + it.second ;
         }
         if ( oddCount <= k && totalSubarray >= k ) {
            return true ;
         }
         return false ;
    }
};
