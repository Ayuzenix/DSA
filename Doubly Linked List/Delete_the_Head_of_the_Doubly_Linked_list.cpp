#include<bits/stdc++.h>
using namespace std;

// Problem:Delete the Head of the Doubly Linked List
// Platform:TakeUForward

/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    ListNode *deleteHead(ListNode *&head) {
        if(head==nullptr || head->next==nullptr){
           return nullptr;
        }
        ListNode*temp=head;
        ListNode*mover=temp->next;
        temp->next=nullptr;
        mover->prev=nullptr;
        return mover; //-->as mover is our new updated Linked List
    }
};
