#include<bits/stdc++.h>
using namespace std;

// Problem:Remove Adjacent Duplicates from String 
// Platform:Leetcode

class Solution {
public:
    string removeDuplicates(string s, int k) {
           int n=s.size();
           stack<pair<char,int>>st;
           for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({s[i],1});
            }else {
                if(st.top().first==s[i]){
                    st.top().second++;
                }else{
                    st.push({s[i],1});
                }
            }
            if(!st.empty() && st.top().second==k){
                st.pop();
            }
           }
           string ans="";
           while(!st.empty()){
           ans=ans.append(st.top().second,st.top().first);
           st.pop();
           }
           reverse(ans.begin(),ans.end());
           return ans;
    }
};
