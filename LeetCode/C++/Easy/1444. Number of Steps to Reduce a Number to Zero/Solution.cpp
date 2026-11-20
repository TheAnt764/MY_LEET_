class Solution {
public:
    int numberOfSteps(int num, int step){
        if(num==0)return step;
        if(num%2==0){
            step++;
            return numberOfSteps(num/2 ,step);
        }
        else {
            step++;
            return numberOfSteps(num-1, step);
        }
        return step;
    }
    int numberOfSteps(int num) {
        return numberOfSteps(num,0);
    }
};