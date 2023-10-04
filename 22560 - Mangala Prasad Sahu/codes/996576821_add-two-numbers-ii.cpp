class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr;
        while (head) {
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* reversedList1 = reverseLinkedList(list1);
        ListNode* reversedList2 = reverseLinkedList(list2);
        ListNode* result = new ListNode();

        int digitSum = 0;
        int carry = 0;
        while (reversedList1 || reversedList2) {
            if (reversedList1) {
                digitSum += reversedList1->val;
                reversedList1 = reversedList1->next;
            }
            if (reversedList2) {
                digitSum += reversedList2->val;
                reversedList2 = reversedList2->next;
            }

            result->val = digitSum % 10;
            carry = digitSum / 10;
            ListNode* newHead = new ListNode(carry);
            newHead->next = result;
            result = newHead;
            digitSum = carry;
        }

        if (carry == 0) {
            return result->next;
        } else {
            return result;
        }
    }
};
