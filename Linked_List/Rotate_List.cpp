#include<bits/stdc++.h>
using namespace std;

// Problem:Rotate List
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
public: //Rotate String by using constant space (Optimal Solution)
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        if (head == nullptr) {
            return nullptr;
        }
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count == 1) {
            return head;
        }
        k = k % count;
         if (k == 0) {
            return head;
        }
        int range = count - k;
        int c1 = 0;
        ListNode* temp1 = head;
        while (c1 != range - 1) {
            c1++;
            temp1 = temp1->next;
        }
        ListNode* is_next = temp1->next;
        ListNode* new_head = is_next;
        temp1->next = nullptr;
        while (is_next->next != nullptr) {
            is_next = is_next->next;
        }
        is_next->next = head;
        return new_head;
    }
};
