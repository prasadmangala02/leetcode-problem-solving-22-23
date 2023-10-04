class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      vector<int> result;
      stack<int> mystack;
      for(int i = nums.size() - 1 ; i >= 0 ; i-- ){
     	    mystack.push(nums[i]) ;
      }
      // unordered_map <int,int> mymap;
      for(int i = nums.size() - 1 ; i >= 0; i--){
          while(!mystack.empty() && nums[i]>=mystack.top()) mystack.pop();        // doing pop operation for mantaining monotonic cond
          if(mystack.empty()) result.push_back(-1);  //meaning there is no next greater element 
          else result.push_back(mystack.top()); 
          mystack.push(nums[i]);
      }
      // vector<int> myresult;
      // for(int i=0; i< nums.size(); i++) myresult.push_back(mymap[nums[i]]);
      // return myresult;
      reverse(result.begin(), result.end());
      return result;
    }
};