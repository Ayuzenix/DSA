#include<bits/stdc++.h>
using namespace std;

// Problem:Minimun Add to Make Parentheses Valid
// Platform:Leetcode

class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top()=='(' && s[i]==')'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        int count=0;
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};
