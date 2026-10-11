#include<bits/stdc++.h>
using namespace std ;

// Problem : Queue Reconstruction by Height 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size() ;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( { people[i][0] , people[i][1] } ) ;
        }
        vector<vector<int>>store( n , vector<int>( 2 , -1 ) ) ;
        while( !pq.empty() ) {
            int element = pq.top().first , position = pq.top().second ; 
            int count = 0 ; 
            for ( int i = 0 ; i < n ; i ++ ) {
                 if ( store[i][0] == -1 || store[i][0] == element ) {
                     count ++ ; 
                 }
                 if ( count == ( position + 1 ) ) {
                     store[i] = { element , position } ;
                     break ; 
                 }
            }
            pq.pop() ;
        }
        return store ; 
    }
};
