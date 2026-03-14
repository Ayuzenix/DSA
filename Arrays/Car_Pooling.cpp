#include<bits/stdc++.h>
using namespace std;

// Problem:Car Pooling 
// Platform:Leetcode

class Solution {
public: // Line Swapping 
    bool carPooling(vector<vector<int>>& trips, int capacity) {
         int n=trips.size();
         vector<vector<int>>result;
         for(int i=0;i<n;i++){
            result.push_back({trips[i][1],trips[i][0]});
            result.push_back({trips[i][2],-trips[i][0]});
         }
         sort(result.begin(),result.end());
         int sum=0;
         for(int i=0;i<result.size();i++){
            sum=sum+result[i][1];
            if(sum>capacity){
                return false;
            }
         }
         return true;
    }
};
