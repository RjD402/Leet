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
    //https://leetcode.com/problems/linked-list-cycle/
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        //check if next and next of next exists to avoid null reference error
        while(fast && fast->next){  
            slow=slow->next;
            fast = fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
