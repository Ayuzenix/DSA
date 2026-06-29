#include<bits/stdc++.h>
using namespace std ;

// Problem : Shortest Job First 
// Platform : TakeUForward / GeeksForGeeks 

class Solution {
  public:
    long long solve(vector<int>& bt) {
        sort( bt.begin() , bt.end() ) ;
        long long n = bt.size() , prev = 0 , totalWaitingTime = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             totalWaitingTime = totalWaitingTime + prev ;
             prev = ( prev + bt[i] ) ;
        }
        long long avg = ( totalWaitingTime / n  ) ;
        return avg ;
    }
};

