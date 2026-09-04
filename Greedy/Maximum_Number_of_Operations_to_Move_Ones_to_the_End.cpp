#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Operations to Move Ones to the End 
// Platform : Leetcode 

class Solution {
public:
    int maxOperations(string s) {
        int n = s.size() ;
        int groups = 0 , totalOperations = 0 , idx = 0 ;
        while ( idx < n ) {
             if ( s[idx] == '1' ) {
                 int curr = 0 ;
                 while ( idx < n && s[idx] == '1' ) {
                     curr ++ ;
                     idx ++ ;
                 }
                 groups = groups + curr ;
                 if ( idx < n ) {
                     totalOperations = totalOperations + groups ;
                 }
             }
             idx ++ ;
        }
        return totalOperations ;
    }
};
