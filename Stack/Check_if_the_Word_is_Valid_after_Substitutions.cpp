#include<bits/stdc++.h>
using namespace std;

// Problem:Check if the Word is Valid 
// Platform:Leetcode

class Solution {
public:
    bool isValid(string s) {
         int n=s.size();
         stack<int>st;
         for(int i=0;i<n;i++){
            char ch=s[i];
            if(st.size()>=2 && ch=='c'){
            char x=st.top();
            st.pop();
            char y=st.top();
            st.pop();
            if(x!='b' || y!='a'){
                return false;
            }
            }else{
            st.push(ch);
            }
         }
         if(st.empty()){
            return true;
         }
         return false;
    }
};
