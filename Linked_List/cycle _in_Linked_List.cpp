#include<bits/stdc++.h>
using namespace std;

// Problem:Delect cycle in Linked List
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
       ListNode*mover1=head;
       ListNode*mover2=head;
       while(mover2!=nullptr && mover2->next!=nullptr) {
        mover1=mover1->next;
        mover2=mover2->next->next;
        if(mover1==mover2){
            return true;
        }
       }
       return false;
    }
};
