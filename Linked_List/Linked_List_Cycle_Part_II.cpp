#include<bits/stdc++.h>
using namespace std;

// Problem:Linked List Cycle Part II;
// Platform:Leetcode
// Approach:Bruteforce

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
    ListNode *detectCycle(ListNode *head) {
        ListNode*temp=head;
        map<ListNode*,int>mp; 
        while(temp!=nullptr){
              mp[temp]++;
              if(mp[temp]>1){
                return temp;
              }
              temp=temp->next;
        }
        return nullptr;
    }
};
