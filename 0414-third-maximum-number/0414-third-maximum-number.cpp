// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
       
//        int n=  nums.size();
//        sort(nums.begin(),nums.end());

//        int ans;
//        for(int i=0;i<n;i++){

//         if(n==1){
//         ans = nums[0];
//         }
//         else
//         ans = nums[2];
      
//        }
//         return ans;
//     }
    
// };


class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 1;
        int n = nums.size();

        // Maximum element
        int maxElement = nums[n - 1];

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {

            // Skip duplicates
            if (nums[i] != nums[i + 1]) {
                count++;

                if (count == 3)
                    return nums[i];
            }
        }

        // If less than 3 distinct elements
        return maxElement;
    }
};