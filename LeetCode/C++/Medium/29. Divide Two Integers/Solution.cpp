class Solution {
public:
    int divide(int dividend, int divisor) {
        bool neg = false;
        if(dividend>0 && divisor<0){
            neg = true;
            divisor=0-divisor;
        }
        if(dividend<0 && divisor>0){
            neg = true;
            dividend=0-dividend;
        }
        int count = 0;
        if(dividend<divisor)return count;
        while(dividend>divisor){
            dividend-=divisor;
            count++;
        }
        if(neg)return count=0-count;
        return count;
    }
};