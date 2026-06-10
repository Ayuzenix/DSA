#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Moves to Seat Everyone 
// Platform : Leetcode 

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size() , count = 0 ; 
        sort ( seats.begin() , seats.end() ) ;
        sort( students.begin() , students.end() ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            count = count + abs( students[i] - seats[i] ) ;
        }
        return count ;
    }
};
