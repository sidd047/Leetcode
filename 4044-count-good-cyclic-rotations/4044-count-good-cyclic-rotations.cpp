class Solution {
public:
    int countGoodRotations(vector<int>& nums) {

        int n = nums.size();
        int half = n/2;

        long long total = 0;

        for(int x:nums)
            total += x;

        long long sum = 0;
        for(int i=0; i<half; i++){
            sum+=nums[i];
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(sum > total-sum)
            {
                count++;
            }
        

        sum = sum - nums[i];
        sum = sum + nums[(i+half)%n];
        }

        return count;
        
    }
};