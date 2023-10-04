/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *newstart = head;
        
        if(head==NULL || head->next==NULL)
            return NULL;
        
        while(fast->next!=NULL and fast->next->next!=NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                
                while(slow!=newstart){
                    slow=slow->next;
                    newstart=newstart->next;
                }
            return newstart;
            }
        }
       return NULL;
        }
    
    

};