#include<bits/stdc++.h>
using namespace std;

// Problem:Grumpy Bookstore Owner
// Platform:Leetcode

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int m=grumpy.size();
        int l=0,r=0,sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum=sum+customers[i];
            }
        }
        int cst_satisfied=0;
        while(r<n){
            if(grumpy[r]==1){
                sum=sum+customers[r];
            }
            while((r-l+1)>minutes){
                if(grumpy[l]==1){
                    sum=sum-customers[l];
                }
                l++;
            }
            cst_satisfied=max(cst_satisfied,sum);
            r++;
        }
        return cst_satisfied;
    }
};
