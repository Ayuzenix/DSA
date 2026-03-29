#include<bits/stdc++.h>
using namespace std;

// Problem:Integer to Roman
// Platform:Leetcode

class Solution {
public:
    string intToRoman(int num) {
         vector<pair<int,string>>store={{3000,"MMM"},{2000,"MM"},{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
         string ans="";
         for(auto &it:store){
           while(num>=it.first){
            num=num-it.first;
            ans=ans+it.second;
           }
         }
         return ans;
    }
};
