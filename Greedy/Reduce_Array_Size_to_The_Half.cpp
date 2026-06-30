#include<bits/stdc++.h>
using namespace std ;

// Problem : Reduce Array Size to The Half 
// Platform : Leetcode 

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[arr[i]] ++ ;
        }
        vector<pair<int,int>>store ;
        for ( auto & it: mp ) {
             store.push_back( { it.first , it.second } ) ; 
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ) {
             return a.second > b.second ;
        }) ;
        int curr = 0 , numberOfInteger = 0 ;
        for ( auto & it: store ) {
             curr = curr + it.second ;
             numberOfInteger ++ ;
             if ( ( curr ) >= ( n / 2 ) ) {
                 break ;
             }
        }
        return numberOfInteger ;
    }
};
