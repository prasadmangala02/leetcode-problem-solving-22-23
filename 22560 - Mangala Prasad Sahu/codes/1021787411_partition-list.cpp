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
    ListNode* partition(ListNode* head, int x) {
        // Make two lists upper and lower
        if(head == NULL || head->next == NULL)  return head;

        // First the lower head
        ListNode* left = NULL;
        ListNode* ptr1 = NULL;
        ListNode* right = NULL;
        ListNode* ptr2 = NULL;
        ListNode* ptr = head;

        while(ptr){

            if(ptr->val < x){
                ListNode* temp1 = new ListNode(ptr->val);
                if(left == NULL){
                    left = temp1;
                    ptr1 = temp1;
                }
                else{
                    left->next = temp1;
                    left = left->next;
                }
            }

            else{
                ListNode* temp2 = new ListNode(ptr->val);
                if(right == NULL){
                    right = temp2;
                    ptr2 = temp2;
                }
                else{
                    right->next = temp2;
                    right = right->next;
                }
            }

            ptr = ptr->next;
        }

        if(ptr1 == NULL) {
            right->next = NULL;
            return ptr2;   
        }
        else if(right == NULL) {
            left->next = NULL;
            return ptr1;   
        }
        else{
            right->next = NULL;
            left->next = ptr2;
            return ptr1;
        }

    }
};