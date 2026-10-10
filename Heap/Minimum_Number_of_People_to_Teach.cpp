#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of People to Teach
// Platform : Leetcode 

class Solution {
public:
    bool isComman( vector<vector<int>>& languages , int idx1 , int idx2 ) {
         vector<int>store1 = languages[idx1] ;
         vector<int>store2 = languages[idx2] ;
         sort( store1.begin() , store1.end() ) ;
         sort( store2.begin() , store2.end() ) ;
         int l = 0 , r = 0 ;
         while ( l < store1.size() && r < store2.size() ) {
               if ( store1[l] < store2[r] ) {
                   l ++ ;
               } else if ( store1[l] > store2[r] ) {
                   r ++ ; 
               } else {
                 return true; 
               }
         }
         return false ;
    }
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = friendships.size() ;
        set<int>st ; 
        for ( int i = 0 ; i < m ; i ++ ) {
             if ( isComman( languages , friendships[i][0] - 1 , friendships[i][1] - 1 ) == false ) {
             st.insert( friendships[i][0] ) ;
             st.insert( friendships[i][1] ) ;
             }
        }
        unordered_map<int,int>mp ;
        for ( auto &it:st ) {
             int idx = it -1 ; 
             for ( int i = 0 ; i < languages[idx].size() ; i ++ ) {
                 mp[languages[idx][i]] ++ ; 
             }
        }
        priority_queue<int>pq ; 
        for ( auto &it:mp ) {
             pq.push( it.second ) ;
        }
        int maxi = INT_MAX , a = st.size() ;
        while ( !pq.empty() ) {
            int top = pq.top() ;
            maxi = min( maxi , a - top ) ;
            pq.pop() ;
        }
        if ( maxi == INT_MAX ) {
            return 0 ;
        }     
           return maxi ; 
    }
};
