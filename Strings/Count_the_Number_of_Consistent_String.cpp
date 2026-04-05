#include<bits/stdc++.h>
using namespace std ;

// Problem : Count the Number of Consistent Strings 
// Platform : Leetcode 

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = allowed.size() ;
        int count = 0 ; 
        unordered_map<char,int>mp;
        for ( int i = 0 ; i < n ; i ++ ) {
            mp [ allowed[i] ] ++ ;
        }
        for ( int i = 0 ; i < words.size() ; i ++ ) {
             string curr = words[i] ;
             bool check = true ;
             for ( int i = 0 ; i < curr.size() ; i ++ ) {
                if ( mp.find(curr[i]) == mp.end()) {
                    check = false ;
                    break ;
                }
             }
             if ( check ==true ) {
                count ++ ;
             }
        }
        return count ;
    }
};
