#include<bits/stdc++.h>
using namespace std;

// Problem:Largest Odd Number in String
// Platform:Leetcode

class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int gama=-1;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                gama=i;
                break;
            }
        }
        if(gama==-1){
            return "";
        }
        return num.substr(0,gama+1);
    }
};
