#include<bits/stdc++.h>
using namespace std;

// Problem : Check if ith Bit is Set or Not 
// Platform : TakeUForword

class Solution {
public:
    bool checkIthBit(int n, int i) {
         vector<int>store ;
         while ( n > 0 ) {
             int rem = n % 2 ;
             if ( n > 0 ) {
             store.push_back( rem ) ;
             }
             n = n / 2 ;
         }
         return ( store[i] == 1 ) ;
    }
};
