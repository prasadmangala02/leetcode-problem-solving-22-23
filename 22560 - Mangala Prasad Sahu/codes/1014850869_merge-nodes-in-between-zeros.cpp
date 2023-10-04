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
    ListNode* mergeNodes(ListNode* head) {
        int currSum = 0;    
        ListNode* t1 = head->next;
        ListNode* current = new ListNode();
        ListNode* result = current;
        while(t1 != NULL){
            if(t1->val == 0){
                current->next = new ListNode(currSum);
                current = current->next;
                currSum = 0;
            }
            else{
                currSum += t1->val;
            }
            t1 = t1->next;
        }

        ListNode* finalResult = result->next;
        delete result;
        return finalResult;

    }
};