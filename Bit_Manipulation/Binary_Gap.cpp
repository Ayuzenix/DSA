#include<bits/stdc++.h>
using namespace std ;

// Problem : Binary Gap
// Platform : Leetcode 

//--> Brute Force one 
class Solution {
public:
    int binaryGap(int n) {
        vector<int>store;
        while ( n > 0 ) {
              int rem = n % 2 ;
              store.push_back( rem ) ;
              n = n / 2 ;
        }
        reverse ( store.begin() , store.end() ) ;
        int l = 0 ;
        int r = 0 ;
        int maxlen = 0 ;
        int ones = 0 ;
        while ( r < store.size() ) {
            if ( store[r] == 1 ) {
                ones ++ ;
            }
            if ( store[l] == 1 && store[r] ==1 && ones == 2 ) {
                maxlen = max ( maxlen , ( r - l ) ) ;
                l = r ;
                ones = 1 ;
            }
            r ++ ;
        }
        return maxlen ;
    }
};

// --> Optimal One 

class Solution {
public: 
    int binaryGap(int n) {
        
        int last_pos= -1 ;
        int curr_pos=0 ;
        int maxlen = 0 ;
        while ( n > 0 ) {
            int x = n & 1 ;
            if ( x !=0 )  {
                if ( last_pos != -1 ) {
                    maxlen = max ( maxlen , ( curr_pos - last_pos) ) ;
                    last_pos = curr_pos ;
                }else {
                    last_pos = curr_pos ;
                }
            } 
            curr_pos ++ ;
            n = n / 2 ;
        }
        return maxlen ; 
    }
};
