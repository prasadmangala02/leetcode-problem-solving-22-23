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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
       // temp = head;
        
        int count=0;
        int i=0;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        if((count%2)!=0){
            for(i=0;i<(count/2);i++){
                temp=temp->next;
            }
            return temp->next;
        }
        else
        {
            for(i=0;i<(count/2);i++){
                temp=temp->next;
            }
            return temp;
        }
        
   }
};