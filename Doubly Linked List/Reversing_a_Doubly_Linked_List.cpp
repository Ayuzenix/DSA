#include<bits/stdc++.h>
using namespace std;

// Problem:Reversing a Doubly Linked List
// Platform:TakeUForwerd
/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
       ListNode*curr=head;
       if(head==nullptr || head->next==nullptr){
        return head;
       }
       ListNode*last=nullptr;
       while(curr!=nullptr){
        last=curr->prev;
        curr->prev=curr->next;
        curr->next=last;
        curr=curr->prev;
       }
       return last->prev;
    }
};
