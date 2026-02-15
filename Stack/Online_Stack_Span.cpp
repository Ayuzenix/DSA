#include<bits/stdc++.h>
using namespace std;

// Problem:Online Stack Span
// Platform:Leetcode

class StockSpanner {
public:
    unordered_map<int,int>mp;
    stack<int>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        while(!st.empty() && st.top()<=price){ 
            count=count+mp[st.top()];
            st.pop();
        }
        st.push(price);
        mp[price]=count;
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
