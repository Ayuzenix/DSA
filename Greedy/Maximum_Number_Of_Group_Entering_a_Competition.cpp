#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Groups Entering a Competition
// Platform : Leetcode 

class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size() ;
        vector<int>store ;
        sort( grades.begin() , grades.end() ) ;
        int l  = 0 , r = 0 , prev = 0 , sum = 0 ;
        while ( r < n ) {
             sum = sum + grades[r] ;
             if ( ( r - l + 1 ) > store.size() && sum > prev ) {
                 store.push_back( sum ) ;
                 prev = sum ;
                 sum = 0 ;
                 l = r + 1 ;
             }
             r ++ ;
        } 
        return store.size() ;
    }
};
