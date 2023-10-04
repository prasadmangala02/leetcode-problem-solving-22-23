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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        ListNode* itr1 = NULL;
        ListNode* itr2 = NULL;
        // int end_node = count - k + 1 ;   
        for(int i = 1 ; i <= count ; i++){
            if(i == k){
                itr1 = temp;
            }
            if(i == count - k + 1){
                itr2 = temp;
            }
            temp = temp->next;
        }

        swap(itr1->val, itr2->val);
        return head;
        
    }
};