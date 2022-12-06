/**
 * Definition for singly-linked list.*/
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* node = removeNodes(head->next);
        if(head->val < node->val)
        {
            return node;
        }
        head->next = node;
        return head;
    }
};