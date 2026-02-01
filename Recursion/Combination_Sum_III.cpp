#include<bits/stdc++.h>
using namespace std;

// Problem:Combination Sum III;
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&check,vector<int>&temp,int k,int n,int idx,int &m){
        if(n==0){
            if(temp.size()==k){
                result.push_back(temp);
            }
            return ;
        }
        if(n<0 || idx==m){
            return ;
        }

        temp.push_back(check[idx]);
        solve(check,temp,k,n-check[idx],idx+1,m);
        temp.pop_back();

        solve(check,temp,k,n,idx+1,m);

        return ;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>check={1,2,3,4,5,6,7,8,9};
        int m=check.size();
        vector<int>temp;
        solve(check,temp,k,n,0,m);
        return result;

    }
};
