#include<bits/stdc++.h>
using namespace std;

// Problem:Next Smaller Element
// Platform:TakeUForward

class Solution {
public: 
    vector<int> nextSmallerElements(const vector<int>& arr) {
        vector<int>result=arr;
        stack<int>st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            if(!st.empty() && arr[i]>st.top()){
                result[i]=st.top();
                st.push(arr[i]);
            }else{
                if(st.empty()){
                    result[i]=-1;
                    st.push(arr[i]);
                }
            }
        }
        return result;
    }
};
