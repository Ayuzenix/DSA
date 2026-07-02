#include<bits/stdc++.h>
using namespace std ;

// Problem : Divide Players Into Teams of Equal Skill 
// Platform : Leetcode 

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
         long long n = skill.size() , prev = -1 , totalScore = 0 , l = 0 , r = n - 1 ;
         sort( skill.begin() , skill.end() ) ;
         while ( l < r ) {
            long long sum = skill[l] + skill[r] ;
            if ( prev != -1 && sum != prev ) {
                totalScore = -1 ;
                break ;
            }
            totalScore = totalScore + ( skill[l] * skill[r] ) ;
            prev = sum ;
            l ++ ;
            r -- ;
         }
         return totalScore ;
    }
};
