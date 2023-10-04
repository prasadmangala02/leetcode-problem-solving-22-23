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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* itr1 = list1;
        ListNode* itr2 = list1;
        ListNode* temp = list2;
        for(int i = 0 ; i <= b ; i++){
            if(i < a - 1) itr1 = itr1->next;
            itr2 = itr2->next;
        }
        itr1->next = list2;
        while(list2->next != NULL) list2 = list2->next;
       
        list2->next = itr2;

        return list1;
    }
};