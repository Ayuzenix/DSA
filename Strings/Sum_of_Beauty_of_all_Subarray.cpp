#include<bits/stdc++.h>
using namespace std;

// Problem:Sum of Beauty of all Substrings
// Platform:Leetcode

// Solution 1-Without using Map
class Solution {
public:
    int totalCount(string &curr){
        vector<int>store(26,0);
        int max_freq=INT_MIN;
        int min_freq=INT_MAX;
        for(int i=0;i<curr.size();i++){
            store[curr[i]-'a']++;
        }
        for(int i=0;i<store.size();i++){
                max_freq=max(max_freq,store[i]);
                if(store[i]!=0){
                min_freq=min(min_freq,store[i]);
                }
        }
        if(min_freq==INT_MAX){
            min_freq=0;
        }
        return (max_freq-min_freq);
    }
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            string curr="";
            for(int j=i;j<n;j++){
                curr=curr+s[j];
                sum=sum+totalCount(curr);
            }
        }
        return sum;
    }
};

// Solution 2-By using map
class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            for(int j=i;j<n;j++){
                mp[s[j]-'a']++;
                int max_freq=INT_MIN;
                int min_freq=INT_MAX;
                for(auto &it:mp){
                    max_freq=max(max_freq,it.second);
                    min_freq=min(min_freq,it.second);
                }
                sum=sum+(max_freq-min_freq);
            }
        }
        return sum;
    }
};
