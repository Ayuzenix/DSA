#include<bits/stdc++.h>
using namespace std;

// Problem:Middle of the Linked List
// Platform:Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp!=nullptr){
          temp=temp->next;
          count++;
        }
        ListNode*mover=head;
        int Till_Check=count/2;
        while(Till_Check>0){
            mover=mover->next;
            Till_Check--;
        }
        return mover;
    }
};
