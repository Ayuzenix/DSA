#include<bits/stdc++.h>
using namespace std ;

// Problem : Array With Elements Not Equal to Average of Neighbors 
// Platform : Leetcode 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        vector<int>store( n ) ;
        store[n-1] = nums[1] ; // as per the Constraints there will always be atleast 3 elements in given Array 
        store[n-3] = nums[0] ;
        store[n-2] = nums[n-1] ;
        int r = n - 2 , l = 2 , idx = n - 4 ;
        while ( l <= r   ) {
             if ( l <= r ) {
             store[idx] = nums[r] ;
             r -- , idx -- ;
             }
             if ( l <= r ) {
             store[idx] = nums[l] ;
             l ++ , idx -- ;
             }
        }
        return store ;
    }
};
