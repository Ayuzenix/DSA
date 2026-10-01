#include<bits/stdc++.h>
using namespace std ;

// Problem : Seat Reservation Manager 
// Platform : Leetcode 

class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq ;

    SeatManager(int n) {
    for ( int i = 1 ; i <= n ; i ++ ) { // Maximum n Seat can be Reserved at a time 
        pq.push( i ) ;
    }
    }
    
    int reserve() {
        int curr = pq.top() ;
        pq.pop() ; // means Number reserved 
        return curr ; 
    }
    
    void unreserve(int seatNumber) {
         pq.push( seatNumber ) ;
         return ;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
