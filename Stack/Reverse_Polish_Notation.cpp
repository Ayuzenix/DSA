#include<bits/stdc++.h>
using namespace std;

// Problem:Reverse Polish Notation 
// Platform:Leetcode

class Solution {
public:
    int solve(int alpha,int beta,string c){
        if(c=="+"){
            return alpha+beta;
        }else if(c=="-"){
            return beta-alpha;
        }else if(c=="/"){
            return beta/alpha;
        }else{
            return beta*alpha;
        }
    }
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            if(tokens[i]!="*" && tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/"){
                st.push(tokens[i]);
            }else{
                int x=stoi(st.top());
                st.pop();
                int y=stoi(st.top());
                st.pop();
                st.push(to_string(solve(x,y,tokens[i])));
            }
        }
        return stoi(st.top());
    }
};
