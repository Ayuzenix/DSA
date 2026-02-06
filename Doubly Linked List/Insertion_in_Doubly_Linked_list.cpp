#include<bits/stdc++.h>
using namespace std;

//Problem:Insertion in Doubly LinkedList
//Platform:Leetcode

*/
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
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode*mover1=head;
        ListNode*temp=new ListNode(X,nullptr,mover1);
        mover1->prev=temp;
        return temp;
    }
};
