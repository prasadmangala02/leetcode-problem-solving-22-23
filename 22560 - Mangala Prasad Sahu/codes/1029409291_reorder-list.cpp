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
    void reorderList(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            stk.push(temp);
            temp = temp->next;
        }

        temp = head;
        int i = 0;
        for(int i = 0 ; i < (count / 2) ; i++){
            if(count%2 == 0 & i==((count/2)-1)){
              break;
            }
            // if(i >= (count / 2) - 1 ) break;
            ListNode* add = temp->next;
            ListNode* top_stack = stk.top();
            temp->next = top_stack;
            top_stack->next = add;
            temp = add;
            stk.pop();
            (stk.top()) -> next = NULL;
        }
    }
};