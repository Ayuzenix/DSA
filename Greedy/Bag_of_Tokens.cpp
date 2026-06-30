#include<bits/stdc++.h>
using namespace std ;

// Problem : Bag of Tokens 
// Platform : Leetcode 

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size() , totalScore = 0 ;
        sort ( tokens.begin() , tokens.end() ) ; 
        int l = 0 , r = n - 1 ;
        while ( l <= r ) {
            if ( tokens[l] <= power ) {
                totalScore = totalScore + 1 ;
                power = power - tokens[l] ;
                l ++ ;
            } else if ( ( power + tokens[r] ) >= tokens[l] && ( r - l + 1 ) > 1 && totalScore >=1 ) {
                power = power + tokens[r] ;
                r -- ;
                totalScore = totalScore - 1 ;
            } else {
                break ;
            }
        }
        return totalScore ;
    }
};
