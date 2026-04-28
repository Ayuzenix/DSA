#include<bits/stdc++.h>
using namespace std ;

// Problem : My Calendar II 
// Platform : Leetcode 

class MyCalendarTwo {
public:
    map<int,int> mp ; 
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
         int count = 0 ; 
         mp[startTime] = mp[ startTime ] + 1 ;
         mp[endTime] = mp[endTime] -1 ;
         for ( auto & it : mp ) {
            count = count + ( it.second) ;
            if ( count > 2 ) {
                mp[startTime] = mp[ startTime ] - 1 ;
                mp[endTime] = mp[endTime] + 1 ;
                return false ;
            }
         }
         return true ;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */
