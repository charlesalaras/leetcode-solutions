/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.
*/

// Runtime: 8ms
// Memory Usage: 14.9 MB

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* head = nullptr;
        ListNode* curr3 = head;
        while(curr1 != nullptr && curr2 != nullptr) {
            if(curr1->val < curr2->val) {
                if(head == nullptr) {
                    head = curr1;
                    curr3 = head;
                    curr1 = curr1->next;
                    /*
                    curr3->next = curr2;
                    curr2 = curr2->next;
                    curr3 = curr3->next;
                    */
                }
                else {
                    curr3->next = curr1;
                    curr3 = curr3->next;
                    curr1 = curr1->next;
                    /*
                    curr3->next = curr2;
                    curr3 = curr3->next;
                    curr2 = curr2->next;
                    */
                }
            }
            else if(curr1->val >= curr2->val) {
                if(head == nullptr) {
                    head = curr2;
                    curr3 = head;
                    curr2 = curr2->next;
                    /*
                    curr3->next = curr1;
                    curr1 = curr1->next;
                    curr3 = curr3->next;
                    */
                }
                else {
                    curr3->next = curr2;
                    curr3 = curr3->next;
                    curr2 = curr2->next;
                    /*
                    curr3->next = curr1;
                    curr3 = curr3->next;
                    curr1 = curr1->next;
                    */
                }
            }
        }
        // Check if there's still list nodes at end
        while(curr1 != nullptr) {
            if(head == nullptr) {
                head = curr1;
                curr3 = head;
                curr1 = curr1->next;
            }
            else {
                curr3->next = curr1;
                curr3 = curr3->next;
                curr1 = curr1->next;
            }
        }
        while(curr2 != nullptr) {
            if(head == nullptr) {
                head = curr2;
                curr3 = head;
                curr2 = curr2->next;
            }
            else {
                curr3->next = curr2;
                curr3 = curr3->next;
                curr2 = curr2->next;               
            }

        }
        return head;
    }
};

            // if(curr1->val == curr2->val) {
            //     head = curr1; // Set Current Node to Curr1
            //     curr1 = curr1->next; // Move Iterator to Next
            //     head->next = curr2; // Set Next Node to Curr2
            //     curr2 = curr2->next; // Move Iterator to Next
            // }
            // else if(curr1->val < curr2->val) {
            //     head = curr1; // Set Current Node to Curr1
            //     curr1 = curr1->next; // Move Iterator to Next
            //     head->next = curr2; // Set Next Node to Curr2
            //     curr2 = curr2->next; // Move Iterator to Next
            // }
            // else if(curr2->val < curr1->val) {
            //     head = curr2;
            //     curr2 = curr2->next;
            //     head->next = curr1;
            //     curr1 = curr1->next;
            // }
            // curr = curr->next;
