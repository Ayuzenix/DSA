#include<bits/stdc++.h>
using namespace std;

// Problem:Finding a Three digit Even Integer
// Platform:Leetcode

class Solution {
public: // Brute Force Solution 
    vector<int> findEvenNumbers(vector<int>& digits) {
           int n=digits.size();
           vector<int>result;
           for(int i=0;i<n;i++){
            int d1=digits[i];
            for(int j=0;j<n;j++){
                int d2=digits[j];
                for(int k=0;k<n;k++){
                    if(i!=j && i!=k && j!=k){
                        int ans=digits[i]*100+digits[j]*10+digits[k];
                        if(ans>=100 && ans%2==0){
                        result.push_back(ans);
                        }
                    }
                }
            }
           }
           unordered_map<int,int>mp;
           for(int i=0;i<result.size();i++){
               mp[result[i]]++;
           }
           vector<int>fAns;
           for(auto &it:mp){
            fAns.push_back(it.first);
           }
           sort(fAns.begin(),fAns.end());
           return fAns;
    }
};
