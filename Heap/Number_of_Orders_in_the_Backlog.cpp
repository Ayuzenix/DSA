#include<bits/stdc++.h>
using namespace std ;

// Problem : Number of Orders in the Backlog 
// Platform : Leetcode 

class Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        int n = orders.size() ;
        long long modulo = 1e9 + 7 ;
        priority_queue<long long>buy ; // Largest Buy Orders -->> will check when current order is sell 
        priority_queue<long long,vector<long long>,greater<long long>>sell ; // Largest Sell Orders -->> will check when current order is buy 
        unordered_map<long long,long long>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( orders[i][2] == 0 ) { // buy Order 
                 if ( !sell.empty() ) {
                     long long curr = sell.top() ;
                     while ( curr <= orders[i][0] ) {
                        //  long long mini = min( orders[i][1] , mp[curr] ) ;
                         long long mini ;
                         if ( orders[i][1] <= mp[curr] ) {
                             mini = orders[i][1] ;
                         } else {
                            mini = mp[curr] ;
                         }
                         mp[curr] = mp[curr] - mini ;
                         orders[i][1] = orders[i][1] - mini ;
                         if ( mp[curr] == 0 ) {
                             mp.erase( curr ) ;
                             sell.pop() ;
                             if ( sell.empty() ) {
                                 break ;
                             } else {
                                curr = sell.top() ;
                             }
                         }
                         if ( orders[i][1] == 0 ) {
                             break ;
                         }
                     }
                     if ( orders[i][1] != 0 ) {
                         mp[orders[i][0]] = mp[orders[i][0]] + orders[i][1] ;
                         buy.push( orders[i][0] ) ;
                     }
                 } else {
                         mp[orders[i][0]] = mp[orders[i][0]] + orders[i][1] ;
                         buy.push( orders[i][0] ) ;
                 }
             } else { // sell order 
                 if ( !buy.empty() ) {
                     long long curr = buy.top() ;
                     while ( curr >= orders[i][0] ) {
                        //  long long mini = min( orders[i][1] , mp[curr] ) ;
                         long long mini ;
                         if ( orders[i][1] <= mp[curr] ) {
                             mini = orders[i][1] ;
                         } else {
                            mini = mp[curr] ;
                         }
                         mp[curr] = mp[curr] - mini ;
                         orders[i][1] = orders[i][1] - mini ;
                         if ( mp[curr] == 0 ) {
                             mp.erase( curr ) ;
                             buy.pop() ;
                             if ( buy.empty() ) {
                                 break ;
                             } else {
                                curr = buy.top() ;
                             }
                         }
                         if ( orders[i][1] == 0 ) {
                             break ;
                         }
                     }
                     if ( orders[i][1] != 0 ) {
                         mp[orders[i][0]] = mp[orders[i][0]] + orders[i][1] ;
                         sell.push( orders[i][0] ) ;
                     }
                 } else {
                         mp[orders[i][0]] = mp[orders[i][0]] + orders[i][1] ;
                         sell.push( orders[i][0] ) ;
                 }
             }
        }
        long long count = 0 ;
        for ( auto &it:mp ) {
             count = count + ( it.second ) ;
        }
        return ( count % modulo ) ;
    }
};
