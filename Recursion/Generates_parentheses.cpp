#include<bits/stdc++.h>
using namespace std;

// Problem:Generates parentheses
// Platform:Leetcode

class Solution {
public:
    vector<string> result;
    bool isvalid(string temp) {
        int count = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == '(') {
                count++;
            } else {
                if (temp[i] == ')') {
                    count--;
                }
            }
            if (count < 0) {
                return false;
            }
        }
        return (count == 0);
    }
    void solve(string temp, int& n) {
        if (temp.size() == 2 * n) { //-->This is our Base case
            if (isvalid(temp) == true) {
                result.push_back(temp);
            }
            return;
        }

        temp.push_back('(');
        solve(temp, n);
        temp.pop_back();
        temp.push_back(')');
        solve(temp, n);
        temp.pop_back();

        return;
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        solve(temp, n);
        return result;
    }
};
