/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val1    {0};
        int val2    {0};
        int sum     {0};
        ListNode *result = new ListNode(0);
        ListNode *traverse = result;

        while (l1){
            val1 *= 10;
            val1 += l1->val;
            l1 = l1->next;
        }
        while (l2){
            val2 *= 10;
            val2 += l2->val;
            l2 = l2->next;
        }
        sum = val1 + val2;
        traverse->val = (sum % 10);
        while (sum > 9){
            sum /= 10;
            traverse->next = new ListNode(sum % 10);
            traverse = traverse->next;
        }
        traverse = NULL;
        delete traverse;
        return (result);
    }
};