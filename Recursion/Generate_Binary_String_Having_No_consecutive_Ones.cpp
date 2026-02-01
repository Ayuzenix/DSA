#include<bits/stdc++.h>
using namespace std;

// Problem:Generate Binary String with No consecutive one's
// Platform:tak U forward

class Solution {
public:
    vector<string>result;
    bool cons_one(string temp){
        for(int i=1;i<temp.size();i++){
            if(temp[i]=='1' && temp[i-1]=='1'){
                return false;
            }
        }
        return true;
    }
    void solve(string temp,int &n,int k){
        if(k>n){
            return ;
        }
        if(k==n){
           if(cons_one(temp)==true){
            result.push_back(temp);
           }
            return ;
        }
        temp.push_back('1');
        solve(temp,n,k+1);
        temp.pop_back();
        temp.push_back('0');
        solve(temp,n,k+1);
        temp.pop_back();

        return ;
    }
    vector<string> generateBinaryStrings(int n) {
        string temp;
        solve(temp,n,0);
        reverse(result.begin(),result.end());
        return result;
    }
};
