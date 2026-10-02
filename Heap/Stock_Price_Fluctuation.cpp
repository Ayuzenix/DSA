#include<bits/stdc++.h>
using namespace std ;

// Problem : Stock Price Fluctuation 
// Platform : Leetcode 

class StockPrice {
public:
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minpq ; 
    priority_queue<pair<int,int>>maxpq ; 
    priority_queue<pair<int,int>>maxTimepq ; 
    unordered_map<int,int>mp ; 
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        maxpq.push( { price , timestamp } ) ;
        minpq.push( { price , timestamp } ) ;
        maxTimepq.push( { timestamp , price } ) ; 
        mp[timestamp] = price ;  
    }
    // mp[something....] = actual value 
    int current() { // Timestamp Price 
       while ( !maxTimepq.empty() && maxTimepq.top().second != mp[maxTimepq.top().first] ) {
              maxTimepq.pop() ;
       } 
       return maxTimepq.top().second ; 
    }
    
    int maximum() { // Price Timestamp
       while ( !maxpq.empty() && maxpq.top().first != mp[maxpq.top().second] ) {
              maxpq.pop() ;
       }
       return maxpq.top().first ; 
    }
    
    int minimum() { // Price Timestamp 
       while ( !minpq.empty() && minpq.top().first != mp[minpq.top().second] ) {
             minpq.pop() ;
       } 
       return minpq.top().first ; 
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
