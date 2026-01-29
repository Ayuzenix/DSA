#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Nesting Depth of Parentheses
// Platform:Leetcode

class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                ans=max(count,ans);
            }else{
                if(s[i]==')'){
                    count--;
                }
            }
        }
        return ans;
    }
};
