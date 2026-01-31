#include<bits/stdc++.h>
using namespace std;

// Problem:Delete the Middle Node of Linked List
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
public:// Now Solving this problem by using Two Pointers(slow,fast)
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        if(head->next==nullptr){
            return nullptr;
        }
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*to_check=head;
        while(to_check->next!=slow){
            to_check=to_check->next;
        }
        to_check->next=slow->next;
        return head;
    }
};
