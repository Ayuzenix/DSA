#include<bits/stdc++.h>
using namespace std;

// Problem: Next Greater Node in Linked List
// Platform: Leetcode, TakeUForward

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
    vector<int> nextLargerNodes(ListNode* head) {
          int count=0;
          stack<int>st;
          ListNode*gama=head;
          while(gama!=nullptr){
            count++;
            gama=gama->next;
          }
          vector<int>store(count,0);
          ListNode*prev=nullptr;
          ListNode*curr=head; 
          while(curr!=nullptr){
            ListNode*front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
          }
          //-->Now our new head is prev;
          ListNode*head1=prev;
          int i=count-1;
          while(head1!=nullptr){
            while(!st.empty() && head1->val>=st.top()){
                st.pop();
            }
            if(st.empty()){
                store[i]=0;
                st.push(head1->val);
                head1=head1->next;
            }else{
                if(!st.empty() && head1->val<st.top()){
                    store[i]=st.top();
                    st.push(head1->val);
                    head1=head1->next;
                }
            }
            i--;
          }
          return store;
    }
};
