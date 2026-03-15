#include<bits/stdc++.h>
using namespace std;

// Problem:shifting Letters
// Platform:Leetcode

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
           int n=s.size();
           vector<int>store=shifts;
           store[n-1]=store[n-1]%26;
           for(int i=n-2;i>=0;i--){
               store[i]=store[i]+store[i+1];
               store[i]=store[i]%26;
           }
           for(int i=0;i<n;i++){
             int x=s[i]-'a';
             int b=(x+store[i])%26;
             s[i]=b+'a';
           }
           return s;
    }
};
