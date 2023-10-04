class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans(nums1.size(), -1);
        stack<int> stk;
        unordered_map<int, int> GreaterElementMap;
        
        int size2 = nums2.size();
        for(int i = 0; i < size2; ++i){
            while(!stk.empty() && nums2[i] > stk.top()){
                GreaterElementMap[stk.top()] = nums2[i];
                stk.pop();
            }

            stk.push(nums2[i]);
        }
        int size1 = nums1.size();
        for (int i = 0; i < size1; ++i) {
            if (GreaterElementMap.count(nums1[i])) {
                ans[i] = GreaterElementMap[nums1[i]];
            }
        }
        return ans;
    }
};