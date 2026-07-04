#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Operations to Move All Balls to Each Box 
// Platform : Leetcode 

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int leftBalls = 0 , n = boxes.size() ;
        vector<int>leftCount ( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( i == 0 ) {
                 leftCount[i] = leftBalls ;
            } else {
                 leftCount[i] = leftBalls + leftCount[i-1] ;
            }
            if ( boxes[i] == '1' ) {
                leftBalls ++ ;
            }
        }
        int rightBalls = 0 ;
        vector<int>rightCount( n ) ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) { 
            if ( i == n - 1 ) { 
                rightCount[i] = rightBalls ;
            } else {
                rightCount[i] = rightBalls + rightCount[i+1] ;
            }
            if ( boxes[i] == '1' ) {
                rightBalls ++ ;
            }
        }
        vector<int>totalCount( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             totalCount[i] = leftCount[i] + rightCount[i] ;
        }
        return totalCount ;
    }
};
