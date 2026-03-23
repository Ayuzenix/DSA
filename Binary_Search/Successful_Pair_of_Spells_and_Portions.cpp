#include<bits/stdc++.h>
using namespace std;

// Problem:Successful Pair of Spells and Potions
// Platform:Leetcode 
// Time Complexity:O(NlogN)

class Solution {
public:
    bool toCount(vector<int>&potions,long long spell,long long mid,long long success){
        long long ans=(long long)spell*(long long)potions[mid];
        return (ans>=success);
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
          vector<int>result;
          sort(potions.begin(),potions.end());
          for(int i=0;i<spells.size();i++){
             long long low=0;
             long long high=potions.size()-1;
             long long ans=0;
             while(low<=high){
                long long mid=(low+high)/2;
                if(toCount(potions,spells[i],mid,success)==true){
                    if((potions.size()-mid)>ans){
                    ans=potions.size()-mid;
                    }
                    high=mid-1;
                }else {
                    low=mid+1;
                }
             }
             result.push_back(ans);
          }
          return result;
    }
};
