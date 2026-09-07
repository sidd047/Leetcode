class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0)
        return 0;

    // int k = 1; //dusre unique element ko store kar rahe hai  

    // for (int i = 1; i < nums.size(); i++) {
    //     if (nums[i] != nums[i - 1]) {
    //         nums[k] = nums[i];
    //         k++;  // aisa isliye kar rahe hai kyuki aur bhi elements ho sakte hai aage
    //     }
    // }
//     return k;

int i = 0;
int j = 1;
int count = 1;

while(j<nums.size())
{
    if(nums[i]!=nums[j])
    {
        i++;
        nums[i] = nums[j];
    }
    j++;
   // count++;
}
     return i+1;
}
};