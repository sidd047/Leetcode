class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {

     int original = x;
     int digitSum = 0;
     
     while(x>0)
     {
        digitSum += x%10;
        x = x/10;
     }
  if(original % digitSum==0){
    return digitSum;
  }
  return -1;
    }
};