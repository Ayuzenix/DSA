#include<bits/stdc++.h>
using namespace std;

// Problem:Isomorphic Strings 
// Platform:Leetcode

class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int m=s.size();
      int n=t.size();
      if(m!=n){
        return false;
      }
      unordered_map<int,int>mp1,mp2;
      for(int i=0;i<n;i++){
        char a=s[i];
        char b=t[i];

        if(mp1.count(a) && mp1[a]!=b ||
           mp2.count(b) && mp2[b]!=a){
            return false;
           }
           mp1[a]=b;
           mp2[b]=a;
      }
      return true;
    }
};
