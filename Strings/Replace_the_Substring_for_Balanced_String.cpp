#include<bits/stdc++.h>
using namespace std ;

// Problem : Replace the Substring for Balanced String 
// Platform : Leetcode 

class Solution {
public:

    bool toCheck( vector<int>store , vector<int>extra ) {
        for ( int i = 0 ; i < 26 ; i ++ ) {
             if ( store[i] < extra[i] ) {
                 return false ;
             }
        }
        return true ; 
    }

    int balancedString(string s) {
        int n = s.size() ;
        unordered_map<char,int>mp ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[s[i]] ++ ; 
        }
        vector<int>extra( 26 , 0 ) ;
        for ( auto &it:mp ) {
             int x = ( it.second - ( n / 4 ) ) ;
             if ( x >= 1 ) {
                 extra[it.first-'A'] = x ; // Means this much of extra unit of this latter is required 
             }
             // if extra[something..] == 0 means have no contribution can be considered or not inside our substring
        }
        vector<int>store( 26 , 0 ) ;
        if ( store == extra ) {
            return 0 ;
        }
        int l = 0 , r = 0 , minlen = INT_MAX ;
        while ( r < n ) {
            if ( ( extra[s[r] - 'A'] > 0 ) ) {
                store[s[r] - 'A'] ++ ;
            }
            while ( ( l <= r ) && toCheck( store , extra ) == true ) { // Since r is already included in store that's why ( l <= r )
                minlen = min( minlen , ( r - l + 1 ) ) ;
                if ( ( extra[s[l] - 'A'] > 0 ) ) {
                store[s[l] - 'A'] -- ; 
            }
                l ++ ;
            }
            r ++ ; 
        }
        return minlen ; 
    }
};
