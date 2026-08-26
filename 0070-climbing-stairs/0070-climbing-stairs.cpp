// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=1){
//         return 1;
//         }
//         return climbStairs(n-1)+climbStairs(n-2);
        
//     }
// };

class Solution{
    public:
    int climbStairs(int n){
        if(n<=2){
            return n;
        }
        int first =1, second =2;
        for(int i=3;i<=n;i++){
            int current = first + second;
            first = second;
            second = current;
        }
        return second;
    }
};