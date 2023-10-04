class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        if(!head) return NULL;
        stack<int> stk;
        ListNode* temp = head;

        while (temp) {

            // Check if the current node should be included in the new list
            while (!stk.empty() && temp->val > stk.top()) {
                stk.pop();
            }

            stk.push(temp->val);
            temp = temp->next;
        }

        vector<int> tempRes;
        while(!stk.empty()){
            tempRes.push_back(stk.top());
            stk.pop();
        }
        reverse(tempRes.begin(), tempRes.end());
        temp = head;
        int size = tempRes.size();
        for (int i = 0; i < size; i++){
            temp->val = tempRes[i];
            if(i != size - 1)
            temp = temp->next;
        }
        
        temp->next = NULL;

        return head;
    }
};
