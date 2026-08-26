#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest Missing Non-negative Integer After Operations 
// Platform : Leetcode 

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size() , count = 0 ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( nums[i] >= 0 ) {
             mp[ nums[i] % value] ++ ;
             } else {
                int toadd = nums[i] % value ;
                if ( toadd < 0 ) {
                mp[toadd + value] ++ ; // This will Definetly be storing a Positive value 
                } else {
                    mp[toadd] ++ ; // In case that Remainder itselft comes out to be zero 
                }
             }
        }
        int prev = -1 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( mp.find( prev + 1 ) != mp.end() ) {
                 mp[prev+1] -- ;
                 if ( mp[prev+1] == 0 ) {
                      mp.erase( prev + 1 ) ;
                 }
                 prev ++ ;
             } else {
                int x = ( prev + 1 + value ) % value ; // All Cases Where ( prev + 1 ) is Smaller or Equal then value 
                int y = ( prev + 1 - value ) % value ; // All Cases Where ( prev + 1 ) is Greator then value 
                if ( mp.find( x ) != mp.end() ) {
                    mp[x] -- ;
                    if ( mp[x] == 0 ) {
                         mp.erase( x ) ;
                    }
                    prev ++ ;
                } else {
                    if ( mp.find( y ) != mp.end() ) {
                        mp[y] -- ;
                        if ( mp[y] == 0 ) {
                             mp.erase( y ) ;
                        }
                        prev ++ ;
                    } else  {
                        return ( prev + 1 ) ;
                    }
                }
             }
        }
        return ( prev + 1 ) ;
    }
};
