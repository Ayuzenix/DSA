#include<bits/stdc++.h>
using namespace std;

// Problem:Plus One
// Platform:Leetcode

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n=digits.size();
          vector<int>store;
          int carry=0;
          for(int i=n-1;i>=0;i--){
              int sum=0;
              if(i==n-1){
                sum=digits[i]+carry+1;
              }else{
                sum=digits[i]+carry;
              }
              store.push_back(sum%10);
              carry=sum/10;
          }
          if(carry!=0){
            store.push_back(carry);
          }
          reverse(store.begin(),store.end());
          return store;
    } 
};
