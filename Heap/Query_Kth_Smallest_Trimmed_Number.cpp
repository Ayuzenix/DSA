#include<bits/stdc++.h>
using namespace std ;

// Problem : Query Kth Smallest Trimmed Number 
// Platform : Leetcode

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        long long n = nums[0].size() ;
        vector<int>store ;
        for ( int i = 0 ; i < queries.size() ; i ++ ) {
             int idx = ( n - queries[i][1] ) ;
             priority_queue<pair<string,long long>,vector<pair<string,long long>>,greater<pair<string,long long>>>pq ; 
             for ( int j = 0 ; j < nums.size() ; j ++ ) {
                  string curr = nums[j].substr( idx , ( n - idx ) ) ;
                  pq.push( { curr , j } ) ;
             }
             int count = 1 ; 
             while ( count != queries[i][0] ) {
                 pq.pop() ;
                 count ++ ;
             }
             store.push_back( pq.top().second ) ;
        }
        return store ; 
    }
};
