#include<bits/stdc++.h>
using namespace std;

// Problem:Multiply Strings
// Platform:Leetcode

class Solution {
public:
    string multiply(string num1, string num2) {
           int n=num1.size();
           int m=num2.size();
           if(num1=="0" || num2=="0"){
            return "0";
           }
           vector<int>store(n+m,0);
           for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int sum=mul+store[i+j+1];
                store[i+j+1]=sum%10;
                store[i+j]+=sum/10;
            }
           }
           string ans="";
           for(int i=0;i<n+m;i++){
               ans=ans+to_string(store[i]);
           }
           int l=0;
           while(ans[l]=='0'){
                 l++;
           }
           return ans.substr(l,(n+m-l));
    }
};
