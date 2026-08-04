#include<bits/stdc++.h>
using namespace std ;

// Problem : String Without AAA or BBB ( by Greedy ( No Simulation ) ) 
// Platform : Leetcode 

class Solution {
public: // Method-2 ( Only by Greedy )
    string strWithout3a3b(int a, int b) {
        string str = "" ;
        while ( a > 0 || b > 0 ) {
             if ( a > b ) {
                str = str + 'a' , a -- ;
                if ( a > b ) {
                    str = str + 'a' , a -- ;
                }
                if ( b > 0 ) {
                    str = str + 'b' , b -- ;
                }
             } else {
                str = str + 'b' , b -- ;
                if ( b > a ) {
                    str = str + 'b' , b -- ;
                }
                if ( a > 0 ) {
                    str = str + 'a' , a -- ;
                }
             }
        }
        return str ;
    }
};
