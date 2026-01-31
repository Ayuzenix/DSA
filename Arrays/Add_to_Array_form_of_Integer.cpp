#include<bits/stdc++.h>
using namespace std;

// Problem:Add to Array form of Integer
// Platform:Leetcode

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>result;
        int carry=0;
        int idx=num.size()-1;
        while(k>0 || carry>0 || idx>=0){
            int sum=carry+k%10;
            if(idx>=0){
                sum=sum+num[idx--];
            }
            result.push_back(sum%10);
            carry=sum/10;
            k=k/10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
