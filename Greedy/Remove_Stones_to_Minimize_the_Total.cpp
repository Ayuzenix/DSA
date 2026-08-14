#include<bits/stdc++.h>
using namespace std ;

// Problem : Remove Stones to Minimize the Total 
// Platform : Leetcode 

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size() ;
        int maxi = *max_element( piles.begin() , piles.end() ) ;
        if ( n == 1 ) {
            while ( k > 0 && maxi > 0  )  {
                maxi = maxi - ( maxi / 2 ) ;
                k -- ;
            }
            return maxi ;
        }
        int sum = 0 ;
        priority_queue<int>pq ;
        for ( int i = 0 ; i < piles.size() ; i ++ ) {
             pq.push( piles[i] ) ;
        }
        while ( k > 0 ) {
              int top = pq.top() ;
              pq.pop() ;
              while ( k > 0 && top >= pq.top() ) {
                  top = top - ( top / 2 ) ;
                  k -- ;
              }
              pq.push( top ) ;
        }
       while ( !pq.empty() ) {
           sum = sum + pq.top() ;
           pq.pop() ;
       }
       return sum ;
        
    }
};
