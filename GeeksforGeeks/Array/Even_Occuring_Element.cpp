#include<bits/stdc++.h>
using namespace std;

// Problem : Even Occuring Element 
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        
        int n = arr.size();
        map<int,int>mp;
        for (int i =0 ; i < n ;i ++ ){
            mp[arr[i]] ++;
        }
        vector<int>vec;
        for ( int i = 0 ; i < n ; i ++ ) {
            if (mp[arr[i]] % 2 == 0 ){
                vec.push_back(arr[i]);
                mp[arr[i]] = -1 ;
            }
        }
        if ( vec.empty()){
            return {-1};
        }
        return vec;
    }
};
