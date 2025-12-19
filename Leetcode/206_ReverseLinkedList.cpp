//Given the head of a singly linked list, reverse the list, and return the reversed list.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *new_head = nullptr;

        while (head){
            ListNode *swap = head->next;
            head->next = new_head;
            new_head = head;
            head = swap;
        }

        return (new_head);
    }
};