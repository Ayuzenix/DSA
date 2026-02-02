#include<bits/stdc++.h>
using namespace std;

// Problem:Get Equal Substring Within Budget
// Platform:Leetcode 

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int m=t.size();
        int sum=0;
        int l=0;
        int r=0;
        int maxlen=INT_MIN;
        while(r<n){
            sum=sum+abs(s[r]-t[r]);
            while(sum>maxCost){
                sum=sum-abs(s[l]-t[l]);
                l++;
            }
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        if(maxlen==INT_MIN){
            return 0;
        }
        return maxlen;
    }
};
