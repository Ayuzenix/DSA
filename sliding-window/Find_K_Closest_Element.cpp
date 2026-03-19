#include<bits/stdc++.h>
using namespace std;

// Problem:Find K closest Element 
// Platform:Leetcode

class Solution {
public: // Keeping an Contingous slide over a period of length k
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          int n=arr.size();
          int l=0;
          int r=n-1;
          while((r-l+1)>k){
            if(abs(arr[l]-x)<abs(arr[r]-x)){
                r--;
            }else if(abs(arr[l]-x)>abs(arr[r]-x)){
                l++;
            }else {
                if(abs(arr[l]-x)==abs(arr[r]-x)){
                    r--;
                }
            }
          }
          vector<int>store;
          for(int i=l;i<=r;i++){
            store.push_back(arr[i]);
          }
          return store;
    }
};
