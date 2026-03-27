#include<bits/stdc++.h>
using namespace std;

// Problem:Decode String
// Platform:Leetcode

class Solution {
public:
    string decodeString(string s) {
           int n=s.size();
           stack<string>st;
           stack<int>num;
           int currnum=0;
           for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
               currnum=currnum*10+(s[i]-'0');
            }else if(s[i]=='['){
               num.push(currnum);
               currnum=0;
               st.push(string(1,s[i]));
            }else if(s[i]>='a' && s[i]<='z'){
                st.push(string(1,s[i]));
            }else if(s[i]==']'){
                string curr="";
                while(!st.empty() && st.top()!="["){
                    curr=st.top()+curr;
                    st.pop();
                }
                st.pop();
                int m=num.top();
                num.pop();
                string result="";
                for(int i=0;i<m;i++){
                    result=result+curr;
                }
                st.push(result);
            }
           }
           string to_return="";
           while(!st.empty()){
                  to_return=st.top()+to_return ;
                  st.pop();
           }
           return to_return ;
    }
};
