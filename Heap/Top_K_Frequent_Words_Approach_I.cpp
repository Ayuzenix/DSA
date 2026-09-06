#include<bits/stdc++.h>
using namespace std ;

// Problem : Top K Frequent Words ( Approach I ) 
// Platform : Leetcode 

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
         int n = words.size() ;
         unordered_map<string,int>mp ;
         for ( int i = 0 ; i < n ; i ++ ) {
              mp[words[i]] ++ ;
         }
         priority_queue<pair<int,string>>pq ;
         for ( auto &it:mp ) {
              pq.push( { it.second , it.first } ) ; // Having Higher Frequency at top , if same Frequency Lexicographically bigger at Top. 
         }
         vector<string>result ;
         while ( result.size() != k ) {
                result.push_back( pq.top().second ) ;
                pq.pop() ;
         }
         while ( !pq.empty() && pq.top().first == mp[result.back()] ) {
                result.push_back( pq.top().second ) ;
                pq.pop() ;
         }
         int l = 0 , r = 0 ;
         while ( r < result.size() ) {
             int x = mp[result[l]] ;
             while ( r < result.size() && mp[result[r]] == x ) {
                    r ++ ;
             }
             if ( ( r - l + 1 ) >= 2 ) {
                 sort( result.begin() + l , result.begin() + r ) ;
             }
             l = r ;
         }
         vector<string>finalStore ; 
         for ( int i = 0 ; i < k ; i ++ ) {
              finalStore.push_back( result[i] ) ;
         }
         return finalStore ;
    }
};
