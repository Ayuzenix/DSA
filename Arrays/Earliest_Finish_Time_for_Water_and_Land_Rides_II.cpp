#include<bits/stdc++.h>
using namespace std ;

// Problem : Earliest Finish Time for Land and Water Rides II 
// Platform : Leetcode 

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {   
        // Case : 1 - ( First take land ride and then water ride ) 
        int earliest1 = INT_MAX ;
        for ( int i = 0 ; i < landStartTime.size() ; i ++ ) {
            earliest1 = min ( earliest1 , landStartTime[i] + landDuration[i]  ) ;
        }
        int result1 = INT_MAX ;
        for ( int i = 0 ; i < waterStartTime.size() ; i++ ) {
            int curr = max( earliest1 , waterStartTime[i] ) ;
            result1 = min ( result1 , ( curr + waterDuration[i] ) ) ;
        }

        // Case : 2 - ( First take water ride and then take land ride ) 
        int earliest2 = INT_MAX ;
        for ( int i = 0 ; i < waterStartTime.size() ; i ++ ) {
             earliest2 = min( earliest2 , waterStartTime[i] + waterDuration[i] ) ;
        }
        int result2 = INT_MAX ;
        for (int i = 0 ; i < landStartTime.size() ; i ++  ) {
            int curr = max ( earliest2 , landStartTime[i] ) ;
            result2 = min ( result2 , ( curr + landDuration[i] ) ) ;
        }
        return min( result1 , result2 ) ;
    }
};
