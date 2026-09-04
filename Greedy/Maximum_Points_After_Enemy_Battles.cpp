#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Points After Enemy Battles 
// Platform : Leetcode 

class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
         sort( enemyEnergies.begin() , enemyEnergies.end() ) ;
         int n = enemyEnergies.size() ;
         int l = 0 , r = n - 1 ; 
         long long currPt = 0 ;
        
         while ( l <= r ) {
             if ( currentEnergy < enemyEnergies[l] && currPt == 0 ) {
                 break ;
             } 
             if ( currentEnergy >= enemyEnergies[l] ) {
                //  currPt ++ ;
                //  currentEnergy = currentEnergy - enemyEnergies[l] ;
                currPt = currPt + ( long long )( currentEnergy / enemyEnergies[l] ) ;
                currentEnergy = ( currentEnergy % enemyEnergies[l] ) ;
             } else {
                currentEnergy = currentEnergy + enemyEnergies[r] ;
                r -- ;
             }
         }
         return currPt ;
    }
};
