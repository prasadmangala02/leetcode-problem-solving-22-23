class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans(nums1.size(), -1);
        stack<int> stk;
        unordered_map<int, int> GreaterElementMap;
        
        int size = nums2.size();
        for(int i = 0; i < size; ++i){
            while(!stk.empty() && nums2[i] > stk.top()){
                GreaterElementMap[stk.top()] = nums2[i];
                stk.pop();
            }

            stk.push(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); ++i) {
            if (GreaterElementMap.count(nums1[i])) {
                ans[i] = GreaterElementMap[nums1[i]];
            }
        }
        return ans;
    }
};