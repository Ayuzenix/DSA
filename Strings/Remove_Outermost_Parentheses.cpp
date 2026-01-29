#include<bits/stdc++.h>
using namespace std;

// Problem:Remove Outermost Parentheses
// Platform:Leetcode 

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=0;
        string result="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }else{
                count--;
            }
            if((s[i]=='(' && count!=1) ||
                s[i]==')' && count!=0){
                    result=result+s[i];
                }
        }
        return result;
    }
};
