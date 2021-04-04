/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

// Runtime: 8 ms
// Memory Usage: 8.5 MB

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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return head;
        }
        ListNode* curr = head;
        stack<ListNode*> liststack;
        while(curr != nullptr) {
            liststack.push(curr);
            curr = curr->next;
        }
        head = liststack.top();
        while(!liststack.empty()) {
            curr = liststack.top();
            liststack.pop();
            if(liststack.empty()) {
                curr->next = nullptr;
            }
            else{
                curr->next = liststack.top();
            }
        }
        return head;
    }
};
