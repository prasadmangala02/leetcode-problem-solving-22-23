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
        ListNode* dummy = new ListNode(NULL);
        dummy->next = head;
        ListNode *slow = dummy, *fast = dummy;
        for(int i = 0 ; i < n ; i++ ){
            fast = fast->next;
        }

        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;
        return dummy->next;
    }
};