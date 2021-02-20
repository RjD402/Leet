class Solution {
public:
//https://leetcode.com/problems/reverse-linked-list/
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL,next=NULL;
        while (head) {
            next = head -> next;
            head -> next = cur;
            prev = head;
            head = next;
        }
        return prev;
    }
};