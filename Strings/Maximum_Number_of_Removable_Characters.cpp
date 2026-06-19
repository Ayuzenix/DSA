#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Removable Characters 
// Platform : Leetcode 

class Solution {
public:

    bool toCheck( string &s , string &p , vector<int>&removable , int mid ) {
         string str="" ;
         unordered_map<int,int>mp1 ;
         for ( int i = 0 ; i < mid ; i ++ ) {
              mp1[removable[i]] ++ ;
         }
         int l = 0 ;
         for ( int i = 0 ; i < s.size() ; i ++ ) {
             if (mp1.find( i ) != mp1.end() ) {
                continue ;
             }
             if ( l < p.size() &&  s[i] == p[l] ) {
                l ++ ;
             }
         }
         if ( l < p.size() ) {
            return false ;
         }
         return true ;
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        int ans = 0 , low = 1 , high = removable.size() ;
        while ( low <= high ) {
            int mid = ( low + high ) / 2 ;
            if ( toCheck( s , p , removable , mid ) == true ) {
                ans = mid ;
                low = mid + 1 ;
            } else {
                high = mid - 1 ;
            }
        }
        return ans ;
    }
};
