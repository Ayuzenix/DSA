#include<bits/stdc++.h>
using namespace std;

// Problem:Longest Common Prefix
// Platform:Leetcode

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
    string first=strs[0];
    int idx=0;
    int count=0;
    int fcount=INT_MAX;
    if(strs.size()==0){
        return "";
    }
    for(int i=1;i<n;i++){
        while(idx<first.size() && idx<strs[i].size() &&first[idx]==strs[i][idx] ){
            count++;
            idx++;
            fcount=min(fcount,count);
        }
            count=0;
            idx=0;

        }

        if(fcount==INT_MAX) return "";
        return first.substr(0,fcount);

    }
};
