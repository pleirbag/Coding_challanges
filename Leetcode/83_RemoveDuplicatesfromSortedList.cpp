/*Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
 Return the linked list sorted as well.*/



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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return (nullptr);
        if (!head->next)
            return (head);
        if (head->next->val == head->val)
            head = head->next;
        ListNode *traverse = head;
        while (traverse->next){
            while (traverse->val == traverse->next->val){
                if (traverse->next->next)
                    traverse->next = traverse->next->next;
                else{
                    traverse->next = nullptr;
                    return (head);
                }
            }
            traverse = traverse->next;
        }
        return (head);
    }
};