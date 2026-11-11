class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long ans = 0;

        int mini = min(need1, need2);
        
        if (costBoth < cost1 + cost2) {
            ans += 1LL * mini * costBoth;
            
            need1 -= mini;
            need2 -= mini;
        }

        ans += 1LL * need1 * min(cost1, costBoth);
        ans += 1LL * need2 * min(cost2, costBoth);

        return ans;

    }
};