#include<bits/stdc++.h>
using namespace std;

// Problem : Count Pair Sum 
// Platform : GeeksforGeeks


class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        int count = 0 ;
        sort( arr1.begin() , arr1.end());
        sort( arr2.begin() , arr2.end());
        int n = arr1.size();
        int m = arr2.size();
        int p1 = n-1 ;
        int p2=0;
        while ( p1>=0 && p2<m) {
             int sum = arr1[p1] + arr2[p2] ;
             if ( sum == x ){
                 count ++ ;
                 p1--;
                 p2++;
             }else if ( sum > x ) {
               p1--;
             }else if ( sum < x) {
                 p2 ++ ;
             }
        }
        return count ;
    }
};
