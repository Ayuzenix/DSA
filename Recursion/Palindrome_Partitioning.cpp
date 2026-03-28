#include<bits.stdc++.h>
using namespace std;

// Problem:Palindrome Partitioning
// Platform:Leetcode

class Solution {
public:
    vector<vector<string>>result;
    bool isPalindrome(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void solve(int idx,int &n,string &s,vector<string>&curr){
         if(idx==n){
            result.push_back(curr);
            return ;
         }
         for(int i=idx;i<n;i++){
            if(isPalindrome(s,idx,i)){
                curr.push_back(s.substr(idx,(i-idx+1)));
                solve(i+1,n,s,curr);
                curr.pop_back();
            }
         }
         return ;
    }
    vector<vector<string>> partition(string s) {
         int n=s.size();
         vector<string>curr;
         solve(0,n,s,curr);
         return result;
    }
};
