#include<bits/stdc++.h>
using namespace std;

// Problem:Baseball Game
// Platform:Leetcode

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="C" && !st.empty()){
                st.pop();
            }else if(operations[i]=="D"){
                string gama=st.top();
                int put=stoi(gama)*2;
                st.push(to_string(put));
            }else if(operations[i]=="+"){
                string x=st.top();
                st.pop();
                string y=st.top();
                st.pop();
                int finalstr=stoi(x)+stoi(y);
                st.push(y);
                st.push(x);
                st.push(to_string(finalstr));
            }else {
                st.push(operations[i]);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum=sum+stoi(st.top());
            st.pop();
        }
        return sum;
    }
};
