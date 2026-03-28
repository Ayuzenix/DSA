#include<bits/stdc++.h>
using namespace std;

// Problem:Compare Version Numbers
// Platform:Leetcode

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.size();
        int m=version2.size();
        int l1=0,r1=0;
        int l2=0,r2=0;
        while(r1<n || r2<m){
            int num1=0;
            int num2=0;
            while(r1<n && version1[r1]!='.'){
                r1++;
            }
            while(r2<m && version2[r2]!='.'){
                r2++;
            }
            for(int i=l1;i<r1;i++){
                num1=num1*10+(version1[i]-'0');
            }
            for(int i=l2;i<r2;i++){
                num2=num2*10+(version2[i]-'0');
            }
            if(num1<num2){
                return -1;
            }
            if(num1>num2){
                return 1;
            }
            l1=r1+1;
            l2=r2+1;
            r1++;
            r2++;
        }
        return 0;
    }
};
