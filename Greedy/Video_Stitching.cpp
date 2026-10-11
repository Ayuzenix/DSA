#include<bits/stdc++.h>
using namespace std ;

// Problem : Video Stitching 
// Platform : Leetcode 

class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        int n = clips.size() ;
        int count = 0 , maxi = -1 , idx = 0 ; 
        sort( clips.begin() , clips.end() ) ; 
        if ( clips[0][0] != 0 ) {
            return -1 ; 
        }
        while ( idx < n ) {
            if ( maxi >= time ) {
                break ;
            }
            if ( maxi == -1 ) {
                while ( idx < n && clips[idx][0] == 0 ) {
                    maxi = max( maxi , clips[idx][1] ) ;
                    idx ++ ; 
                }
                count ++ ; 
            } else if ( maxi >= clips[idx][0] ) {
                int prevMaxi = maxi ; 
                while ( idx < n && clips[idx][0] <= prevMaxi ) {
                    maxi = max( maxi , clips[idx][1] ) ;
                    idx ++ ; 
                }
                count ++ ; 
            } else {
                return -1 ; 
            }
        }
        if ( maxi < time ) {
            return -1 ; 
        }
        return count ; 
    }
};
