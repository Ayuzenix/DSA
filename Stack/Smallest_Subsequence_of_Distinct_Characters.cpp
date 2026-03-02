#include<stdio.h>
using namespace std;

// Problem:Smallest Subsequence of Distinct Characters
// Platform:Leetcode
// Time Complexity=o(n);
// Space Complexity=o(1);

class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.size();
        vector<bool>is_there(26,false);
        vector<int>lastIndex(26,-1);
        stack<char>st;
        for(int i=0;i<n;i++){
            lastIndex[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            if(is_there[s[i]-'a']==true){
                continue;
            }
            while(!st.empty() && ((s[i]-'a')<(st.top()-'a')) && (lastIndex[st.top()-'a']>i)){
                char ch=st.top();
                st.pop();
                is_there[ch-'a']=false;
            }
            if(st.empty()){
                st.push(s[i]);
                is_there[s[i]-'a']=true;
            }else{
                if(!st.empty() && is_there[s[i]-'a']==false){
                    st.push(s[i]);
                    is_there[s[i]-'a']=true;
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
