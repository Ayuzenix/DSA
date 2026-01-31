#include<bits/stdc++.h>
using namespace std;

// Problem:Intersection of Two Linked List
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0;
        int len2=0;
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        while(temp1!=nullptr){
            len1++;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            len2++;
            temp2=temp2->next;
        }
        int diff=abs(len1-len2);
        if(len1>len2){
           ListNode*mover1=headA;
           while(diff>0){
            mover1=mover1->next;
            diff--;
           }
           ListNode*mover2=headB;
           while(mover2!=nullptr && mover1!=nullptr){
           if(mover1==mover2){
            return mover1;
           }
           mover1=mover1->next;
           mover2=mover2->next;
           }
           return nullptr;
        }
        if(len2>len1){
           ListNode*mover2=headB;
           while(diff>0){
            mover2=mover2->next;
            diff--;
           }
           ListNode*mover1=headA;
           while(mover2!=nullptr && mover1!=nullptr){
           if(mover1==mover2){
            return mover1;
           }
           mover1=mover1->next;
           mover2=mover2->next;
           }
           return nullptr; 
        }
        ListNode*check1=headA;
        ListNode*check2=headB;
        while(check1!=nullptr && check2!=nullptr){
           if(check1==check2){
            return check1;
           }
            check1=check1->next;
            check2=check2->next;
        }
        return nullptr;
    }
};
