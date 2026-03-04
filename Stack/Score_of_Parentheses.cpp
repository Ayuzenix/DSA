#include<bits/stdc++.h>
using namespace std;

// Problem:Score of Parentheses
// Platform:Leetcode

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            int val=0;
            if(s[i]=='('){
                st.push(0);
            }else{
              while(st.top()!=0){
                int gama=st.top();
                st.pop();
                val=val+gama;
              }
              val=max(2*val,1);
              st.pop();
              st.push(val);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum=sum+st.top();
            st.pop();
        }
        return sum;
    }
};
