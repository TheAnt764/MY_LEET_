class Solution {
public:
    bool canAliceWin(int n) {
        int range = 10;
        while(range < n){
            n-= range;
            range--;
        }
        return !(range % 2 == 0);
    }
};