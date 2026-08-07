#include<bits/stdc++.h>
using namespace std ;

// Problem : Max Difference You Can Get From Changing an Integer 
// Platform : Leetcode 

class Solution {
public:
    int maxDiff(int num) {
        string str = to_string( num ) ;
        int mini = -1 , maxi = -1 ;
        for ( int i = 0 ; i < str.size() ; i ++ ) {
             if ( str[i] > '1' && mini == -1 ) {
                 mini = ( str[i] - '0' ) ;
             }
             if ( str[i] < '9' && maxi == -1 ) {
                 maxi = ( str[i] - '0' ) ;
             }
        }
        string miniStr = str , maxiStr = str ;
        if ( miniStr[0] == '1' ) {
            int i = 1 ;
            while ( miniStr[i] == '1' || miniStr[i] == '0' ) {
                i ++ ;
            }
            if ( i != miniStr.size() ) {
                for ( int j = 0 ; j < str.size() ; j ++ ) {
                    if ( miniStr[j] == str[i] ) {
                        miniStr[j] = ( 0 + '0' ) ;
                    }
                }
                mini = stoll( miniStr ) ;
            } else {
                mini = stoll( miniStr ) ; 
             }
        } else {
            for ( int i = 0 ; i < str.size() ; i ++ ) {
                if ( str[i] == ( mini + '0') ) {
                    miniStr[i] = ( 1 + '0' ) ; // to get the minimum value
                }
            }
            mini = stoll( miniStr ) ;
        }
        if ( maxi == -1 ) { // Means all elements in str are 9 
            maxi = num ;
        } else {
            for ( int i = 0 ; i < str.size() ; i ++ ) {
                if ( str[i] == ( maxi + '0' ) ) {
                    maxiStr[i] = ( 9 + '0' ) ; // to get the maximum value 
                }
            }
            maxi = stoll( maxiStr ) ;
        }

        return ( maxi - mini ) ;
    }
};
