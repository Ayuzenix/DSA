#include<bits/stdc++.h>
using namespace std ;

// Problem : Kth Largest Element in a Stream 
// Platform : Leetcode 

class KthLargest {
public:
    vector<int>totalStore ;
    int fromTop ;
    priority_queue<int,vector<int>,greater<int>>pq ;
    KthLargest(int k, vector<int>& nums) {
        totalStore.resize( nums.size() ) ;
        fromTop = k ;
        totalStore = nums ;
        for ( int i = 0 ; i < totalStore.size() ; i ++ ) {
             pq.push( totalStore[i] ) ;
        }
    }
    
    int add(int val) {
        pq.push( val ) ;
        while ( pq.size() != fromTop ) {
             pq.pop() ;
        }
        return pq.top() ;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
