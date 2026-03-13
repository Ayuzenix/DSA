#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sum=sum+gain[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
