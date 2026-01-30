#include<bits/stdc++.h>
using namespace std;

// Problem:Detect Cycle in Linked List
// Platform:Leetcode


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode*temp=head;
       map<ListNode*,int>mp;
       while(temp!=nullptr){
        mp[temp]++;
        if(mp[temp]>1){
            return true;
        }
        temp=temp->next;
       } 
       return false;
    }
};
