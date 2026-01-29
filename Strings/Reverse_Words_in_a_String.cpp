#include<bits/stdc++.h>
using namespace std;

// Problem:Reverse Words in a String 
// Platform:Leetcode

class Solution {
public:
    string reverseWords(string s) {
    int n=s.size();
    reverse(s.begin(),s.end());
    int l=0;
    int r=0;
    int idx=0;
    while(idx<n){
        while(idx<n && s[idx]!=' '){
            s[r++]=s[idx++];
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
        }
        idx++;
    }  
    
    return s.substr(0,r-1);
    }
};
