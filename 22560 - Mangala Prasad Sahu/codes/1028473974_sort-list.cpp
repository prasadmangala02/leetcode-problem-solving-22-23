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
private:
    ListNode* mergeList(ListNode* left, ListNode* right){
        ListNode* temp = new ListNode(0);
        ListNode* ptr = temp;

        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                ptr->next = left;
                left = left->next;
            }
            else {
                ptr->next = right;
                right = right->next;
            }
            ptr = ptr->next;

            // If left is not null
            if(left != NULL){
                ptr->next = left;
                // left = left->next;
                // ptr = ptr->next;
            }
            // If right is not null
            if(right != NULL){
                ptr->next = right;
                // right = right->next;
                // ptr = ptr->next;

            }
        }

        return temp->next;
    }
public:
    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;
        // Slow and fast pointer approach to find middle
        // of the linked list
        ListNode* temp = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        temp -> next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);
        return mergeList(left, right);
    }
};