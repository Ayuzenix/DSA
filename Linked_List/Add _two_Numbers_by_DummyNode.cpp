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
#include<bits/stdc++.h>
using namespace std;

// Problem:Add two Numbers 
// Platform:Leetcode
// Approach:DummyNode

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummyNode=new ListNode(-1,nullptr);
        ListNode*temp=dummyNode;
        int carry=0;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        while(temp1!=nullptr || temp2!=nullptr || carry>0){
            int sum=0;
            sum=carry;
            if(temp1!=nullptr){
                sum=sum+temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=nullptr){
                sum=sum+temp2->val;
                temp2=temp2->next;
            }
            ListNode*to_add=new ListNode(sum%10,nullptr);
            temp->next=to_add;
            temp=temp->next;
            carry=sum/10;
        }
        ListNode*to_mark=dummyNode;
        return to_mark->next;
        
    }
};
