#include<bits/stdc++.h>
using namespace std ;

// Prblem : Mirror Frequency Distance 
// Platform : Leetcode 

class Solution {
public:
    int mirrorFrequency(string s) {
        int n = s.size() ;
        unordered_map<char,int>mp;
        unordered_map<char,int>used;
        for (  int i = 0 ; i < n ; i ++ ) {
            mp[s[i]] ++ ;
        }
        int count = 0 ; 
        for ( int i = 0 ; i < n ;  i ++ ) {
             int fc = mp[s[i]] ;
             char m ;
             int x ;
             if ( s[i] >='a' && s[i]<='z' ){
                 x = 'z' - s[i] ;
                 m = 'a' + x ;
                 if ( used.find(s[i]) == used.end() && used.find(m) == used.end()) {
                    count = count + abs( fc - mp[m] ) ;
                    used[s[i]] ++ ;
                    used[m] ++;
                 }
             } else if ( s[i]>='0' && s[i] <='9' ) {
                 x = '9' - s[i] ;
                 m = '0' + x ;
                 if ( used.find(s[i]) == used.end() && used.find(m) == used.end() ) {
                    count = count + abs ( fc - mp[m] ) ;
                    used[s[i]] ++ ;
                    used[m] ++ ;
                 }
             }
        }
        return count ;
    }
};
