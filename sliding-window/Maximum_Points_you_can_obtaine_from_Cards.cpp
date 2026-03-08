#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Points you can obtain from Cards
// Platform:Leetcode,TakeUForward

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum=0;
        int rsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
        }
        int j=k-1;
        int sum=lsum;
        int m=n-1;
        while(j>=0){
            lsum=lsum-cardPoints[j];
            j--;
            rsum=rsum+cardPoints[m];
            m--;
            sum=max(sum,lsum+rsum);
        }
        return sum;
    }
};

