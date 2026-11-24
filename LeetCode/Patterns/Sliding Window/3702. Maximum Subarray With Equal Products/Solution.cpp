class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int l = nums[i];
            int h = nums[i];
            long p = nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(p*nums[j]>=INT_MAX)break;
                p*= nums[j];
                l = lcm(nums[j],l);
                h = gcd(nums[j],h);
                if(p == l*h)ans = max(ans, j-i+1);
            }
        }return ans;
    }
};