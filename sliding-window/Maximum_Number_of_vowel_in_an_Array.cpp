#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Number of vowel in an Sustring of Length K
// Platform:Leetcode

class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int v_count=0;
        int m_vowel=0;
        int l=0,r=0;
        while(r<n){
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'){
                v_count++;
            }
            while((r-l+1)>k){
                if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'){
                    v_count--;
                }
                l++;
            }
            m_vowel=max(m_vowel,v_count);
            r++;
        }
        return m_vowel;
    }
};
