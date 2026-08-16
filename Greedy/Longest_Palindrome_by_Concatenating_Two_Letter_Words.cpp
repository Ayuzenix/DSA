#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Palindrome by Concatenating Two Letter Words 
// Platform : Leetcode 

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++) {
            mp[words[i]]++;
        }
        vector<string> store;
        int maxlen = 0, sameMaxi = 0, maxodd = 0;
        for (int i = 0; i < n; i++) {
            string curr = words[i];
            string toCompare = curr;
            reverse(toCompare.begin(), toCompare.end());
            if (mp.find(toCompare) != mp.end() && curr != toCompare) {
                maxlen = maxlen + 2;
                mp[toCompare]--;
                if (mp[toCompare] == 0) {
                    mp.erase(toCompare);
                }
            } else if (curr == toCompare && mp.find(toCompare) != mp.end()) {
                if (mp[toCompare] % 2 == 0) {
                    maxlen = maxlen + (mp[toCompare] * 2);
                    mp.erase(toCompare);
                } else {
                    maxlen = maxlen + ((mp[toCompare] - 1) * 2);
                    maxodd = max(maxodd, mp[toCompare]);
                    mp.erase(toCompare);
                }
            }
        }
        if (maxodd != 0) {
            maxlen = maxlen + 2;
        }
        return maxlen;
    }
};
