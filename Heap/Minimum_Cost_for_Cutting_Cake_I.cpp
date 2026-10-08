#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Cost for Cutting Cake I 
// Platform : Leetcode 

class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        long long horizontalPiece = 1 , verticalPiece = 1 ; 
        long long totalScore = 0 ;
        priority_queue<long long>pq1 ; 
        priority_queue<long long>pq2 ; 
        for ( int i = 0 ; i < max( m - 1 , n - 1 ) ; i ++ ) {
             if ( i < m - 1 ) {
                 pq1.push( horizontalCut[i] ) ;
             }
             if ( i < n - 1 ) {
                 pq2.push( verticalCut[i] ) ;
             }
        }
        while ( !pq1.empty() && !pq2.empty() ) {
             int x = pq1.top() , y = pq2.top() ;
             if ( x > y ) {
                 totalScore = totalScore + ( ( x * verticalPiece) ) ;
                 horizontalPiece ++ ; 
                 pq1.pop() ;
             } else { // y >= x 
                 totalScore = totalScore + ( ( y * horizontalPiece ) ) ;
                 verticalPiece ++ ;  
                 pq2.pop() ;
             }
        }
        while ( !pq1.empty() ) {
            int x = pq1.top() ;
            totalScore = totalScore + ( ( x * verticalPiece) ) ;
            horizontalPiece ++ ; 
            pq1.pop() ;
        }
        while ( !pq2.empty() ) {
            int y = pq2.top() ;
            totalScore = totalScore + ( ( y * horizontalPiece ) ) ;
            verticalPiece ++ ; 
            pq2.pop() ;
        }
        return totalScore ; 
    }
};
