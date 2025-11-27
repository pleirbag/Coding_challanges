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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *travel    = head;
        int sz              {1};

        while (travel->next){
            travel = travel->next;
            sz++;
        }
        if (sz == 1){
            delete head;
            return (nullptr);
        }
        else if (sz == 2){
            if (n == 1){
                delete travel;
                head->next = nullptr;
                return (head);
            }
            else{
                delete head;
                return (travel);
            }
        }
        else if (sz == n){
            head = head->next;
            return (head);
        }
		
        ListNode *next_node = head->next->next;
        ListNode *previous  = head;

        for (int i {3}; i <= sz && i < sz - n + 2; i++){
            next_node = next_node->next;
            previous = previous->next;
        }
        if (n >= 2){
            delete previous->next;
            previous->next = next_node;
        }
        else if (n == 1)
        {
            delete next_node;
            previous->next = nullptr;
        }
        return (head);        
    }
};