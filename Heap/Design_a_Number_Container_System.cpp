#include<bits/stdc++.h>
using namespace std ;

// Problem : Design a Number Container System
// Platform : Leetcode 

class NumberContainers {
public:
    unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp ; // value index 
    unordered_map<int,int>minMp ;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
         if ( minMp.find( index ) == minMp.end() ) {
             minMp[index] = number ; 
             mp[number].push( index ) ;
         } else {
             minMp[index] = number ; 
             mp[number].push( index ) ;
         }
    }
    
    int find(int number) {
        while ( !mp[number].empty() && number != minMp[mp[number].top()] ) {
            mp[number].pop() ;
        }
        if ( mp[number].empty() ) {
            return -1 ; 
        } 
        return mp[number].top() ; 
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
