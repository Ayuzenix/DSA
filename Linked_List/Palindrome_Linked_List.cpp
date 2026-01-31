#include<bits/stdc++.h>
using namespace std;

// Problem:Palindrome Linked List 
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
    ListNode*reverse(ListNode*head){
        ListNode*temp=head;
        ListNode*prev=nullptr;
        while(temp!=nullptr){
            ListNode*front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*temp1=reverse(slow);
        ListNode*temp2=head;
        while(temp2!=nullptr && temp1!=nullptr){
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};
