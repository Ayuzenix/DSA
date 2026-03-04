#include<bits/stdc++.h>
using namespace std;

// Problem:Check if Word is Valid after Substitutions
// Platform:Leetcode

class Solution {
public:
    bool isValid(string s) {
         int n=s.size();
         stack<char>st;
         for(int i=0;i<n;i++){
            if(s[i]=='c'){
                if(st.size()<2){
                    return false;
                }
                char b=st.top();
                st.pop();
                char a=st.top();
                st.pop();
                if(b!='b' || a!='a'){
                   return false;
                }
            }else{
                st.push(s[i]);
            }
         }
         return st.empty();
    }
};
