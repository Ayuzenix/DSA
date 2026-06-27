#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum number of platforms required for a railway 
// Platform : Leetcode 

class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
        int l = 0 , r = 0 , count = 0 , maxi = 0 ;
        sort( Arrival.begin() , Arrival.end() ) ;
        sort( Departure.begin() , Departure.end() ) ;
        while ( l < Arrival.size() && r < Departure.size() ) {
            if ( Arrival[l] <= Departure[r] ) {
                count ++ ;
                l ++ ;
            } else {
              count -- ;
              r ++ ;
            }
            maxi = max( maxi , count ) ;
        }
        return maxi ;
    }
};
