/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
*/

// Runtime: 52ms
// Memory Usage: 17.9 MB

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
        map<ListNode*, int>listA;
        while(headA != nullptr) {
            listA[headA] = headA->val;
            headA = headA->next;
        }
        while(headB != nullptr) {
            if(listA.find(headB) != listA.end()) {
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }
};

/*
map<ListNode*, int>listA;
while(headA != nullptr) {
    listA[headA] = headA->val;
    headA = headA->next;
}
while(headB != nullptr) {
    if(listA.find(headB) != listA.end()) {
        return headB;
    }
}
*/ 