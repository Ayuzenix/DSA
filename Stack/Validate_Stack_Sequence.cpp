#include<bits/stdc++.h>
using namespace std;

// Problem:Validate Stack Sequence
// Problem:Leetcode/TakeUForward

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
         int n=pushed.size();
         int m=popped.size();
         int k=0;
         int l=0;
         while( k!=m && l!=n){
             while(!st.empty() && st.top()==popped[k]){
                st.pop();
                k++;
             }
             if(l!=n){
             st.push(pushed[l]);
             l++;
             }
         }
         while(k!=m){
            while(!st.empty() && st.top()==popped[k]){
                st.pop();
            }
            k++;
         }
         if(st.empty()){
            return true;
         }
         return false;
    }
};
