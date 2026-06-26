#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Hours of Training to Win a Competition 
// Platform : Leetcode 

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int curr = 0 , currExperience = initialExperience , currEnergy = initialEnergy ;
        for ( int i = 0 ; i < experience.size() ; i ++ ) {
             if ( experience[i] >= currExperience ) {
                curr = curr + ( experience[i] - currExperience + 1 ) ;
                currExperience = experience[i] + 1 ;
             }
             currExperience = currExperience + experience[i] ;
        }
        for ( int i = 0 ; i < energy.size() ; i ++ ) {
             if ( energy[i] >= currEnergy ) {
                curr = curr + ( energy[i] - currEnergy + 1 ) ; 
                currEnergy = energy[i] + 1 ;
             }
             currEnergy = currEnergy - energy[i] ;
        }
        return curr ;
    }
};
