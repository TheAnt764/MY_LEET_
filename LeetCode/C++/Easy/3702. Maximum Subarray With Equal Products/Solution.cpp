class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int l = 1;
            int h = 1;
            int p = 1;
            for(int j=i;j<nums.size();j++){
                p*= nums[j];
                l = lcm(nums[j],l);
                h = gcd(nums[j],h);
                if(p == l*h)ans = max(ans, j-i+1);
            }
        }return ans;
    }
};