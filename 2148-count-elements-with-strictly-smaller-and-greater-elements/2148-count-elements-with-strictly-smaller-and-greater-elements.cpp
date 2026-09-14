class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int count = 0;
        {
           for(int i=0;i<n;i++)
           {
        //    int count = 0;
            if(nums[i] > nums[0] && nums[i] < nums[n-1])
            {
                count++;
            }
           }
        }
        return count;
        
    }
};