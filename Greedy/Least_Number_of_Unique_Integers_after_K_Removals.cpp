#include<bits/stdc++.h>
using namespace std ;

// Problem : Least Number of Unique Integers after K Removals 
// Platform : Leetcode 

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[arr[i]] ++ ;
        }
        vector<vector<int>>store ;
        for ( auto &it:mp ) {
             store.push_back( { it.first , it.second } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ){
             if ( a[1] == b[1] ) {
                return b[0] > a[0] ;
             }
             return b[1] > a[1] ;
        } ) ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             int freq = store[i][1] ;
             while ( freq > 0 && k > 0  ) {
             store[i][1] -- ;
             freq -- ;
             k -- ;
             }
             if ( k == 0 ) break ;
        }
        int count = 0 ; // This will be storing count of Unique Elements present in our arr after k removal
        for ( int i = 0 ; i < store.size() ; i ++ ) {
            if ( store[i][1] > 0 ) {
                count ++ ; 
            }
        }
        return count ;
    }
};
