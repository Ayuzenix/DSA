#include<bits/stdc++.h>
using namespace std ;

// Problem : Largest Element in an Array after Merge Operations 
// Platform : Leetcode 

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
         int n = nums.size() , idx = n - 1 ;
         stack<long long>st ;
         while ( idx >= 0 ) {
             if ( st.empty() ) {
                 st.push( nums[idx] ) ;
             } else {
               if ( nums[idx] <= st.top() ) {
                   long long ans = nums[idx] + st.top() ;
                   st.pop() ;
                   st.push( ans ) ;
               } else {
                  st.push( nums[idx] ) ;
               }  
             }
             idx -- ;
         }
         long long largestElement = 0 ;
         while ( !st.empty() ) {
              largestElement = max( largestElement , st.top() ) ;
              st.pop() ; 
         }
         return largestElement ;
    }
};
