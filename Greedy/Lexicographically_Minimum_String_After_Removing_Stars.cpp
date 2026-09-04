#include<bits/stdc++.h>
using namespace std ;

// Problem : Lexicographically Minimum String After Removing Stars 
// Platform : Leetcode 

class Solution {
public:
    string clearStars(string s) {
        int n = s.size() ; 
        unordered_map<int,int>mp ;
        priority_queue<pair<char,int> , vector<pair<char,int>> , greater<pair<char,int>>>pq ;
        int idx = 0 ;
        while ( idx < n ) {
             while ( idx < n && s[idx] != '*' ) {
                 pq.push( { s[idx] , - idx } ) ; // if First is minimum then place.If first is same Place more idx at top
                 mp[idx] ++ ;
                 idx ++ ;
             }
             if ( idx < n ) {
                 int curr = pq.top().second ;
                 mp.erase( - curr ) ;
                 pq.pop() ;
                 idx ++ ;
             }
        }
        string result = "" ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( s[i] != '*' && mp.find( i ) != mp.end() ) { // Means that Element has not been Deleted 
                 result.push_back( s[i] ) ;
                 mp.erase( i ) ;
             }
        }
        return result ;
    }
};
