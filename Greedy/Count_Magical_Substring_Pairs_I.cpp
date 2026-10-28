#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Magical Substring Pairs I 
// Platform : Leetcode 

class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size() ;
        int count = 0 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             unordered_map<char,int>left ; 
             unordered_map<char,int>right ; 
             unordered_map<char,int>length ;
             for ( int j = i ; j >= 0 ; j -- ) {
                  length[s[j]] ++ ; 
                  left[length.size()] ++ ;
             }
             length.clear() ;
             for ( int j = i + 1 ; j < n ; j ++ ) {
                  length[s[j]] ++ ; 
                  right[length.size()] ++ ; 
             }
             for( int j = 1 ; j <= 26 ; j ++ ) {
                 count = count + ( left[j] * right[j] ) ;
             }
        }
        return count ; 
    }
};
