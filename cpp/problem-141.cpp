/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
*/

// Runtime: 12ms
// Memory Usage: 8 MB

// Special Note: We derived the tortoise and hare pointer method here, without knowing it.

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
        ListNode* curr = head;
        ListNode* offset = head;
        int counter = 0;
        while(curr != nullptr && offset != nullptr) {
            if(counter == 2) {
                if(offset == curr) {
                    return true;
                }
                offset = offset->next;
                counter = 0;
            }
            curr = curr->next;
            counter = counter + 1;
        }
        return false;
    }
};
/*
ListNode* curr = head->next;
ListNode* offset = head;
int counter = 0;

*/

