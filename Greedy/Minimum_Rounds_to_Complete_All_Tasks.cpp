#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Rounds to Complete All Tasks 
// Platform : Leetcode 

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size() , roundRequired = 0 ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[tasks[i]] ++ ;
        }
        for ( auto &it:mp ) {
            int x = it.second ;
            int check = x % 3 ;
            if ( check % 2 != 0 ) { // Means Number Must be formed by their combination 
                int curr = x ;
                // First Checking if can make by combination 
                while ( curr > 0 ) {
                     if ( curr % 3 == 0 ) {
                        roundRequired = roundRequired + ( curr / 3 ) ;
                        curr = 0 ;
                     } else {
                        curr = curr - 2 ;
                        roundRequired = roundRequired + 1 ;
                     }
                }
                if ( curr != 0 ) {
                    return -1 ;
                }
                }else {
                roundRequired = roundRequired + ( x / 3 ) ;
                roundRequired = roundRequired + ( check / 2 ) ;
            }
    }
        return roundRequired ;
}
};
