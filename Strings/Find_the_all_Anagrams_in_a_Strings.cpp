#include<bits/stdc++.h>
using namespace std;

// Problem:Find the all Anagrams in a String
// Platform:Leetcode

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
          int n=s.size();
          int m=p.size();
          vector<int>store(26,0);
          for(int i=0;i<m;i++){
            store[p[i]-'a']++;
          }
          vector<int>curr(26,0);
          vector<int>result;
          int l=0,r=0;
          while(r<n){
            curr[s[r]-'a']++;
            while(l<r && (r-l+1)>m){
                curr[s[l]-'a']--;
                l++;
            }
            if((r-l+1)==m){
                if(curr==store){
                    result.push_back(l);
                }
            }
            r++;
          }
          return result;
    }
};
