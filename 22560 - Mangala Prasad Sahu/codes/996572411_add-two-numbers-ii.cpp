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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp;
        while(head){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }

        return prev;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* r1 = reverseLinkedList(l1);
        ListNode* r2 = reverseLinkedList(l2);
        ListNode* ans = new ListNode();

        int sum = 0;
        int carry = 0;
        while(r1 || r2){
            if(r1){
                sum += r1->val;
                r1 = r1->next;
            }
            if(r2){
                sum += r2->val;
                r2 = r2->next;
            }

            ans->val = sum%10;
            carry = sum/10;
            ListNode* head = new ListNode(carry);
            head->next = ans;
            ans = head;
            sum = carry;
        }
        // while(r1 != NULL){
        //     cout << r1->val << endl;
        //     r1 = r1->next;
        // }

        if(carry == 0){
            return ans->next;
        }
        else return ans;
    }
};