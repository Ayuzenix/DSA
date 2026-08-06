#include<bits/stdc++.h>
using namespace std ;

// Problem : Cinema Seat Allocation 
// Platform : Leetcode 

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int m = reservedSeats.size() ;
        unordered_map<int,int>mp1 ;
        sort( reservedSeats.begin() , reservedSeats.end() ) ;
        for ( int i = 0 ; i < m ; i ++ ) {
             mp1[reservedSeats[i][0]] ++ ;
        }
        int i = 0 , count = ( ( n - mp1.size() ) * 2 ) ;
        while ( i < m ) {
            unordered_map<int,int>mp ;
            mp[1] = 0 , mp[2] = 0 , mp[3] = 0 ;
            int row = reservedSeats[i][0] ;
            while ( i < m && reservedSeats[i][0] == row ) {
                  int curr = reservedSeats[i][1] ;
                  if ( curr >=2 && curr <=5 )  {
                      if ( curr >=4 ){
                        mp[2] ++ ;
                      }
                      mp[1] ++ ;
                  } else if ( curr >= 6 && curr <= 7 ) {
                    mp[3] ++ ;
                    mp[2] ++ ;
                  } else if ( curr >= 8 && curr <=9  ) {
                    mp[3] ++ ;
                  }
                  i ++ ;
            }
            int f = 0 , s = 0 , t = 0 ;
            if ( mp[1] == 0 ) {
                f = 1 ;
            } 
            if ( mp[2] == 0 ) {
                s = 1 ;
            }
            if ( mp[3] == 0 ) {
                t = 1 ;
            }
            if ( ( f + s + t ) == 3 ) {
                count = count + 2 ;
            } else if ( ( f + s + t ) == 2 ) {
                if ( f == 1 && t == 1 ) {
                    count = count + 2 ;
                }
                count = count + 1 ;
            } else if ( ( f + s + t ) == 1 ) {
                count = count + 1 ;
            }
        }
        return count ;
    }
};
