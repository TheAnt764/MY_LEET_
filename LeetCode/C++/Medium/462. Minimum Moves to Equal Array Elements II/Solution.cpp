class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int max = INT_MIN;
        int min = INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>max)max = nums[i];
            if(nums[i]<min)min = nums[i];
        }
        int x = (max+min)/2;

        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<x)ans+=x-nums[i];
            else ans+=nums[i]-x;
        }
        return ans;
    }
};