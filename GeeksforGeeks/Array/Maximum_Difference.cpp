#include<bits/stdc++.h>
using namespace std;

// Problem : Maximum Difference 
// Platform : GeeksforGeeks

class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        
        stack < int > st ;
        
        vector<int>left;
        vector<int>right;
        int n = arr.size() ;
        for ( int i = 0 ; i < n ; i ++) {
             while( !st.empty()  && st.top() >= arr[i]){
                 st.pop() ;
             }
             if ( st.empty() ) {
                 left.push_back( 0 ) ;
                 st.push( arr[i] ) ;
             }else {
                 left.push_back( st.top() ) ;
                 st.push( arr[i] ) ;
             }
        }
        stack < int > st1 ;
        for ( int i = n - 1 ; i >=0 ; i--) {
            while ( !st1.empty() && st1.top() >= arr[i] ) {
                st1.pop() ;
            }
            if ( st1.empty() ) {
                right.push_back( 0 ) ;
                st1.push( arr[i] ) ;
            }else {
                right.push_back( st1.top() ) ;
                st1.push( arr[i] ) ;
            }
        }
        reverse( right.begin() , right.end() ) ;
        int maxi = 0 ;
        for ( int i = 0 ; i < left.size() ; i ++ ) {
             maxi = max( maxi , abs ( left[i] - right[i] )) ;
        }
        return maxi ;
    }
};
