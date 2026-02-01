#include<bits/stdc++.h>
using namespace std;

// Problem:Pow(x,n);
// Platform:Leetcode

class Solution {
public:
    double solve(double x,long long m){
        if(m==0){
            return 1; //-->Base case
        }
        double half=solve(x,m/2);
        if(m%2==0){
            return half*half;
        }else{
            return x*half*half;
        }
    }
    double myPow(double x, long long n) {
        long long  N=n;
        if(n<0){
            N=-n;
            x=1/x; 
        }
        return solve(x,N);
    }
};
