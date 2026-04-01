#include<bits/stdc++.h>
using namespace std;

// Problem : Reverse the Subarray 
// Platform : GeeksforGeeks

// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        l = l - 1 ;
        r = r - 1 ;
        reverse( arr.begin() + l , arr.begin() + r + 1 ) ;
        return arr;
    }
};
