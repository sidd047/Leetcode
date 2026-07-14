class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans = 0;
        int full = numBottles;
        int empty = 0;

        while (full > 0) {

            // Drink all full bottles
            ans += full;
            empty += full;

            // Exchange empty bottles
            full = empty / numExchange;
            empty = empty % numExchange;
        }

        return ans;
    }
};