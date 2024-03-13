class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      ios_base::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
      sort(nums.begin(), nums.end());
      vector<int>ans(2);
      for(int i=1; i<nums.size(); i++)
      {
        if(nums[i]==nums[i-1])
        ans[0]=nums[i];
      }  
      int sum=accumulate(nums.begin(), nums.end(), 0)-ans[0];
      int orgSum=(nums.size()*(nums.size()+1))/2;
      ans[1]=orgSum-sum;
      return ans;
    }
};