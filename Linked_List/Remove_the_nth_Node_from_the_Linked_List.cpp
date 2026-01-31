#include<bits/stdc++.h>
using namespace std;

// Program:Remove the nth Node from the Linked List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int gama=(count-n);
        ListNode*temp1=head;
        ListNode*temp2=nullptr;
        int check=0;
        while(check!=gama){
            temp2=temp1;
            temp1=temp1->next;
            check++;
        }
        if(temp2==nullptr){
            return head->next;
        }
        temp2->next=temp1->next;
        return head;
    }
};
