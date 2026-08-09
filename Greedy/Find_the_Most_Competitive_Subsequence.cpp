#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Most Competitive Subsequence 
// Platform : Leetcode 

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n = nums.size() ;
        stack<int>st ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( st.empty() ) {
                 st.push( nums[i] ) ;
             } else {
                 if ( nums[i] >= st.top() ) {
                     st.push( nums[i] ) ;
                 } else {
                    int x ;
                    if ( st.size() > 0  ) {
                         x = ( k - ( st.size() - 1 ) ) ;
                    } else {
                        x = k ;
                    }
                    if ( x <= 0 ) {
                        x = 0 ;
                    }
                    while ( !st.empty() && st.top() > nums[i] && ( ( n - i ) >= x ) ) {
                           st.pop() ;
                           if ( st.size() > 0 ) {
                           x = ( k - ( st.size() - 1 ) ) ;
                           } else {
                            x = ( k ) ;
                           }
                           if ( x <= 0 ) {
                           x = 0 ;
                    }
                    }
                    st.push( nums[i] ) ;
                    }
                 }
             } 
        vector<int>result ;
        while ( st.size() != k ) {
             st.pop() ;
        }
        while ( !st.empty() ) {
            result.push_back( st.top() ) ;
            st.pop() ;
        }
        reverse( result.begin() , result.end() ) ;
        return result ;
    }
};
