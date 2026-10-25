#include<bits/stdc++.h>
using namespace std ;

// Problem : Find Score of an Array after Marking all Elements 
// Platform : Leetcode 

class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long n = nums.size() ;
        long long score = 0 ;
        unordered_map<long long,long long>mp ; 
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( { nums[i] , i } ) ;
        }
        while ( !pq.empty() ) {
            while ( !pq.empty() && mp.find( pq.top().second ) != mp.end() ) { // means if index at top of pq exist in mp 
                  pq.pop() ;
            }
            if ( !pq.empty() ) {
            long long currIdx = pq.top().second ; 
            score = score + pq.top().first ; 
            pq.pop() ;
            mp[currIdx] ++ ; 
            if ( currIdx != n - 1 ) {
                mp[currIdx+1] ++ ; 
            }
            if ( currIdx != 0 ) {
                mp[currIdx-1] ++ ; 
            }
            }
        }
        return score ; 
    }
};
