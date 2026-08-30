class Solution {
public:
    int maximumGap(vector<int>& nums) {
        // int ans = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>nums[i+1]){
        //         swap(nums[i],nums[i+1]);
        //     }
        // }
        // for(int j=0;j<nums.size();j++){
        //     if(nums[j+1]-nums[j] > ans){
        //         ans=max(nums[j+1]-nums[j],ans);
        //     }
        // }
        // return ans;
      

      if(nums.size() < 2) return 0;

        sort(nums.begin(), nums.end());

        int ans = 0;
        for(int i = 1; i < nums.size(); i++){
            ans = max(ans, nums[i] - nums[i-1]);
        }

        return ans;

    }
};