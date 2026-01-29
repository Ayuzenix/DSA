#include<bits/stdc++.h>
using namespace std;

// Problem:Sum of Beauty of all Subarray
// Platform:Leetcode

class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            vector<int>store(26,0);
            for(int j=i;j<n;j++){
                store[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(store[k]>0){
                        maxi=max(maxi,store[k]);
                        mini=min(mini,store[k]);
                    }
                }
                sum=sum+(maxi-mini);
            }
        }
        return sum;
    }
};
