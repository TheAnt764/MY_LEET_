class Solution {
public:
    int divide(int dividend, int divisor) {
        bool neg = false;
        if(dividend>0 && divisor<0){
            neg = true;
            divisor*=-1;
        }
        if(dividend<0 && divisor>0){
            neg = true;
            dividend*=-1;
        }
        int count = 0;
        if(dividend<divisor)return count;
        while(dividend>divisor){
            dividend-=divisor;
            count++;
        }
        if(neg)return count*=-1;
        return count;
    }
};