#include<bits/stdc++.h>
using namespace std;

// Problem:Asteroid Collision
// Platform:Leetcode

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>res;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()<abs(asteroids[i]) && st.top()>0 && asteroids[i]<0){
                st.pop();
            }
            if(!st.empty() && st.top()==abs(asteroids[i]) && st.top()>0 && asteroids[i]<0){
                st.pop();
            }else{
                if(!st.empty() && st.top()>abs(asteroids[i]) && st.top()>0 && asteroids[i]<0){
                    continue;
                }else{
                    st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
