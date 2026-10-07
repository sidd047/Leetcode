class Solution {
public:
    bool judgeSquareSum(int c) {
        for(double i=0; i*i<=c; i++){
            int rem = c-i*i;
            int j = sqrt(rem);
            if(j*j == rem){
                return true;
            }
        }
        return false;
    }
};