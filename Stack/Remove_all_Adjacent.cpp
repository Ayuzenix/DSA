#include<bits/stdc++.h>
using namespace std;

// Problem:Remove all Adjacent
// Platform:Leetcode

class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        string result="";
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }else if(!st.empty() && s[i]==st.top()){
                while(!st.empty() && s[i]==st.top()){
                    st.pop();
                }
            }else {
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            result=result+st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
