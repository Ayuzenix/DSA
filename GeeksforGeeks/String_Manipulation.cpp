#include<bits/stdc++.h>
using namespace std;

// Problem : String Manipulation 
// Platform : GeeksforGeeks

// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        
        int n = arr.size() ;
        stack<string>st;
        int count = n ;
        int curr= 0 ;
        for ( int i = n -1 ; i >=0 ; i -- ) {
            
            if( !st.empty() && st.top() == arr[i] ) {
                st.pop();
                count = count - 2 ;
            }else {
                if ( st.empty() ) {
                    st.push( arr[i] ) ;
                }else {
                    st.push( arr[i] ) ;
                }
            }
            
        }
        return count ;
    }
};
