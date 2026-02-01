#include<bits/stdc++.h>
using namespace std;

// Problem:Count good Numbers
// Platform:Leetcode

class Solution {
public: 
    long long mod=1e9+7;
    long long power(long long x,long long m){
        if(m==0){
            return 1;
        }
        long long beta=power(x,m/2)%mod;
        if(m%2==0){
            return (beta%mod)*(beta%mod);
        }else{
            return (x*beta)%mod*(beta%mod);
        }
    }
    long long solve(long long n){
        if(n==1){
            return 5;
        }
         
        long long gama=n/2;
        if(n%2==0){
            return (power(5,gama)%mod)*(power(4,gama)%mod);
        }else{
            return (5*power(5,gama)%mod)*(power(4,gama)%mod);
        }
    }
    int countGoodNumbers(long long n) {
       long long ans=solve(n)%mod;
       return ans;
    }
};
