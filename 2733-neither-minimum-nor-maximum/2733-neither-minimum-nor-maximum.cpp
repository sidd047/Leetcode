// class Solution {
// public:
//     int findNonMinOrMax(vector<int>& nums) {
//         int sol = INT_MAX;
//          int ans = INT_MIN;
//         // vector<int>sol=INT_MAX;
//         // vector<int>ans=INT_MIN:
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>ans){
//             ans = nums[i];
//         }
//         }
//         return ans;
//         for(int j=0;j<nums.size();j++)
//         {
//             if(nums[j]<sol){
//                 sol = nums[j];
//             }
//         }
//         return sol;
//         return !(ans,sol);
//     }
// };
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) return -1;

        sort(nums.begin(), nums.end());

        return nums[1];  // any middle element
    }
};