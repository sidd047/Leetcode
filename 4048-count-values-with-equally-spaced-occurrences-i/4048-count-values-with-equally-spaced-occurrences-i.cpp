// class Solution {
// public:
//     int countSpecialIntegers(vector<int>& nums) {
//         int ans = 0;
//         for(int i=0;i<nums.size();i++)
//         {
//             int count = 0;
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                     {
//                         count++;
//                     }
//                 if(count!=3){
//                     continue;
//                 }
//                 for(int k = j+1;k<nums.size();k++)
//                     {
//                     if(nums[i]==nums[j] && nums[j] == nums[k])
//                     {
//                         if(j-i==k-j)
//                         {
//                             ans++;
//                             break;
//                         }
//                     }
//                     }
//             }
//         }
//         return ans;
        
//     }
// };

// class Solution {
// public:
//     int countSpecialIntegers(vector<int>& nums) {
//         int ans = 0;

//         for(int i = 0; i < nums.size(); i++) {

//             if(i > 0 && nums[i] == nums[i-1])
//                 continue;

//             int a = -1, b = -1, c = -1, cnt = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j]) {
//                     cnt++;

//                     if(cnt == 1) a = j;
//                     else if(cnt == 2) b = j;
//                     else if(cnt == 3) c = j;
//                 }
//             }

//             if(cnt == 3 && b - a == c - b)
//                 ans++;
//         }

//         return ans;
//     }
// };

class Solution {
    public:
    int countSpecialIntegers(vector<int>&nums) {
        int ans = 0;

        for (int x = 1; x <= 100; x++) {
            int first = -1;
            int second = -1;
            int third = -1;
            int count = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    count++;

                    if (count == 1) {
                        first = i;
                    } else if (count == 2) {
                        second = i;
                    } else if (count == 3) {
                        third = i;
                    }
                }
            }

            if (count == 3 && second - first == third - second) {
                ans++;
            }
        }

        return ans;
    }
};