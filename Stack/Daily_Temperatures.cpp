#include<bits/stdc++.h>
using namespace std;

// Problem:Daily Temperatures
// Platform:Leetcode

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          stack<int>st;
          vector<int>to_store=temperatures;
          int n=temperatures.size();
          for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                to_store[i]=0;
                st.push(i);
            }else {
                if(!st.empty() && temperatures[i]<temperatures[st.top()] ){
                    to_store[i]=abs(i-st.top());
                    st.push(i);
                }
            }
          }
        return to_store;
    }
};
