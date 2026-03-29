#include<bits/stdc++.h>
using namespace std;

// Problem:Unique three Digits Even Integer
// Platform:Leetcode

// Optimal Solution
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[digits[i]]++;
        }
        vector<int>result;
        for(int i=1;i<=9;i++){
            if(mp[i]==0){ // Means digit is not Present in vector
                continue;
            }
            mp[i]--;
            for(int j=0;j<=9;j++){
                if(mp[j]==0){ // Means digit is not Present in vector
                    continue;
                }
                mp[j]--;
                for(int k=0;k<=8;k=k+2){
                    if(mp[k]==0){
                        continue;
                    }
                    mp[k]--;
                    int num=100*i+10*j+k;
                    result.push_back(num);
                    mp[k]++; // means are Using it once Set Freq again as prev
                }
                mp[j]++;  // means are Using it once Set Freq again as prev
            }
            mp[i]++;  // means are Using it once Set Freq again as prev
        }
        return result.size();
    }
};

// Brute Force Solution 
class Solution {
public: // Brute Force Solution 
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int hundreds=digits[i];
            for(int j=0;j<n;j++){
                int tens=digits[j];
                for(int k=0;k<n;k++){
                    int ones=digits[k];
                    if(i!=j && i!=k && j!=k){
                       int num=100*hundreds+10*tens+1*ones;
                       if(num%2==0){
                        result.push_back(num);
                       }
                    }
                }
            }
        }
        return result.size();
    }
};
