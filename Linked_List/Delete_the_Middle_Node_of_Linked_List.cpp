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
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return nullptr;
        }
        int to_check=count/2;
        int gama=0;
        ListNode*temp1=head;
        ListNode*temp2=nullptr;
        while(gama!=to_check){
            temp2=temp1;
            temp1=temp1->next;
            gama++;
        }

        temp2->next=temp1->next;
        return head;
    }
};
