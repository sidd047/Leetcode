class Solution {
public:
    int findMin(vector<int>& nums) {
      //  return min(nums);
     // return *min_element(nums.begin(), nums.end());
      int st = 0;
        int end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] < nums[end]) {
                end = mid;
            }
            else if (nums[mid] > nums[end]) {
                st = mid + 1;
            }
            else {
                end--;
            }
        }

        return nums[st];
    }
};