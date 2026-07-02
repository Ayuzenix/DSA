#include<bits/stdc++.h>
using namespace std ;

// Problem : Eliminate Maximum Number of Monsters 
// Platform : Leetcode 

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size() ;
        vector<int>store( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            int curr ;
            if ( ( dist[i] % speed[i] ) == 0 ) {
                curr = dist[i] / speed[i] ;
            } else {
                curr = dist[i] / speed[i] + 1 ;
            }
            store[i] = curr ;
        }
        sort ( store.begin() , store.end() ) ;
        int currTime = 1 , count = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( currTime <= store[i] ) {
                count ++ ;
                currTime ++ ;
            } else {
                break ;
            }
        }
        return count ;
    }
};
