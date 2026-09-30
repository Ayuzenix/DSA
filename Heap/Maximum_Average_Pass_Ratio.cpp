#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Average Pass Ratio
// Platform : Leetcode 

class Solution {
public: // Maximum Change always from with respect to original position
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size() ;
        priority_queue<pair<double,int>>pq ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             double a = ( double )classes[i][0] , b = ( double )classes[i][1] ;
             double original = ( double )( ( a / b ) ) ;
             double aChanged = ( double )( ( a + 1 ) / ( b + 1 ) ) ;
             double diff = aChanged - original ;
             pq.push( { diff , i } ) ;
        }
        while ( extraStudents > 0 ) { // Adding Students to a place where they can Contribute Maximum 
            int idx = pq.top().second ; 
            classes[idx][0] = classes[idx][0] + 1 ; 
            classes[idx][1] = classes[idx][1] + 1 ; 
            extraStudents -- ;
            pq.pop() ;
            double a = ( double )classes[idx][0] , b = ( double )classes[idx][1] ;
            double original = ( double )( ( a / b ) ) ;
            double aChanged = ( double )( ( a + 1 ) / ( b + 1 ) ) ;
            double diff = aChanged - original ;
            pq.push( { diff , idx } ) ;
        }
        double result = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            double a = ( double )classes[i][0] , b = ( double )classes[i][1] ;
            result = result + ( double ) ( a / b ) ;
        }
        double m = ( double )n ;
        result = (double)( result / m ) ;
        return result ;
    }
};
