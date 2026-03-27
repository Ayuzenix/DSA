#include<bits/stdc++.h>
using namespace std;

// Problem:Permutation in String
// Platform:Leetcode

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n=s1.size();
         int m=s2.size();
         if(n>m){
            return false;
         }
         vector<int>store(26,0);
         for(int i=0;i<n;i++){
            store[s1[i]-'a']++;
         }
         vector<int>curr(26,0);
         int l=0,r=0;
         while(r<m){
            curr[s2[r]-'a']++;
            while((r-l+1)>n){
                curr[s2[l]-'a']--;
                l++;
            }
            if((r-l+1)==n){
                if(curr==store){
                    return true;
                }
            }
            r++;
         }
         return false;
    }
};
