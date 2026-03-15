#include<bits/stdc++.h>
using namespace std;

// Problem:Corporate Flight Booking 
// Platform:Leetcode

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
                vector<int>store(n,0);
                int m=bookings.size();
                for(int i=0;i<m;i++){
                    store[bookings[i][0]-1]+=bookings[i][2];
                    if(bookings[i][1]<n){
                    store[bookings[i][1]]+=-bookings[i][2];
                    }
                }
                for(int i=1;i<store.size();i++){
                    store[i]=store[i]+store[i-1];
                }
                return store;
    }
};
