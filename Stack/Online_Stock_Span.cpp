#include<bits/stdc++.h>
using namespace std;

// Problem:Online Stock Span
// Platform:Leetcode
// Approach:Brute Force 

class StockSpanner {
public:
    vector<int>result;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        result.push_back(price);
        int count=1;
        int n=result.size();
        for(int i=n-2;i>=0;i--){
            if(result[i]<=price){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
