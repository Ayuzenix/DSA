#include<bits/stdc++.h>
using namespace std;

// Problem:BackSpace String Compare
// Platform:Leetcode

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !st1.empty()){
                st1.pop();
            }else{
                if(s[i]!='#'){
                st1.push(s[i]);
                }
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !st2.empty()){
                st2.pop();
            }else{
                if(t[i]!='#'){
                st2.push(t[i]);
                }
            }
        }
        string result1="";
        string result2="";
        while(!st1.empty()){
            result1=result1+st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            result2=result2+st2.top();
            st2.pop();
        }
        return (result1==result2);
    }
};
