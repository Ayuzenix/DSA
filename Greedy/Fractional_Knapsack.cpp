#include<bits/stdc++.h>
using namespace std ; 

// Problem : Fractional Knapsack 
// Platform : TakeUForward 

class Solution {
public:
    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) {
        vector<pair<double,int>>store ;
        for ( int i = 0 ; i < val.size() ; i ++ ) {
            double x = ( double) val[i] / wt[i]  ;
            store.push_back( { x , i } ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        double total = 0 , curr = 0 ;
        for ( auto & it:store ) {
             int idx = it.second ;
             if ( curr + wt[idx] > capacity ) {
                double to_let = capacity - curr ;
                total = total + ( ( to_let / wt[idx] ) * val[idx] ) ;
                curr = curr + to_let ;
                break ;
             } else {
                total = total + ( val[idx] ) ;
                curr = curr + wt[idx] ;
             }
        }
        return total ;
    }
};
