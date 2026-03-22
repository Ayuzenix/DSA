#include<bits/stdc++.h>
using namespace std;

// Problem:Find right Intervals
// Platform:Leetcode

//-->Brute Force Solution 
class Solution {
public: // Brute Force Solution 
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
          int n=intervals.size();
          vector<int>st;
          vector<int>end;
          for(int i=0;i<intervals.size();i++){
            st.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
          }
          for(int i=0;i<end.size();i++){
              int mini=INT_MAX;
              int idx=-1;
            for(int j=0;j<st.size();j++){
                 if(st[j]>=end[i]){
                    if(st[j]<mini){
                        mini=st[j];
                        idx=j;
                    }
                 }
            }
            end[i]=idx;
          }
          return end;
    }
};

//-->Optimal Solution 
// By using Binary Search 
// Time complexity-o(nlogn)

class Solution {
public:// Optimal Solution
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
           int n=intervals.size();
           vector<int>st;
           vector<int>end;
           for(int i=0;i<n;i++){
            st.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
           }
           unordered_map<int,int>mp;
           for(int i=0;i<st.size();i++){
            mp[st[i]]=i;
           }
           sort(st.begin(),st.end());
           for(int i=0;i<end.size();i++){
               int low=0;
               int high=n-1;
               int ans=-1;
               while(low<=high){
                int mid=(low+high)/2;
                if(st[mid]>=end[i]){
                    ans=mp[st[mid]];
                    high=mid-1;
                }else{
                    low=mid+1;
                }
               }
               end[i]=ans;
           }
           return end;
    }
};
