#include<bits/stdc++.h>
using namespace std;

// Problem : Matrix Interchange 
// Platform : GeeksforGeeks 

//Back-end complete function Template for C++

class Solution {
  public:

    // Complete this function
    void interchange(vector<vector<int>>& arr, int r, int c) {
         int n = arr.size() ;
         for ( int i = 0 ; i < arr.size() ; i ++ ) {
             for ( int j = 0 ; j < arr[i].size()  ; j ++ ) {
                 if ( j == 0 ) {
                     swap ( arr[i][j] , arr[i][c-1]) ;
                 }
             }
         }

        // Printing the modified matrix
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
