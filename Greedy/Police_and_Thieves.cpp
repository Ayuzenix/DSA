#include<bits/stdc++.h>
using namespace std ;

// Problem : Police and Thieves 
// Platform : GeeksforGeeks 

class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int n = arr.size() , count = 0 ;
        vector<int>Police ;
        vector<int>Thieve ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( arr[i] == 'P' ) {
                 Police.push_back( i ) ;
             } else {
                 Thieve.push_back( i ) ;
             }
        }
        int l1 = 0 , l2 = 0 ;
        while ( l1 < Police.size() && l2 < Thieve.size() ) {
            int diff = abs(Thieve[l2] - Police[l1]) ; 
            if ( diff <= k ) {
                count ++ ;
                l1 ++ ;
                l2 ++ ;
            } else {
                diff = Thieve[l2] - Police[l1] ;
                if ( diff > 0 ) {
                    l1 ++ ;
                } else {
                    l2 ++ ;
                }
            }         
        } 
        return count ;
    }
};
