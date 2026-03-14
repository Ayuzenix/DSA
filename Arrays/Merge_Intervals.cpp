#include<bits/stdc++.h>
using namespace std;

// Problem:Merge Intervals
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
           int n=intervals.size();
           vector<vector<int>>result;
           sort(intervals.begin(),intervals.end());
           for(int i=0;i<n;i++){
            int l=i;
            int maxi=intervals[i][1];
            while(l!=n-1 && maxi>=intervals[l+1][0]){
                  l++;
                  maxi=max(maxi,intervals[l][1]);
            }
            result.push_back({intervals[i][0],maxi});
            i=l;
           }
           return result;
    }
};
