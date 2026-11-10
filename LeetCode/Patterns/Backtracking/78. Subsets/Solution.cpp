class Solution {
public:
    void subset(int i, int n, vector<int> & ans, vector<vector<int>> & result, vector<int>& nums){
        if(i==n){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        subset(i+1, nums.size(), ans, result, nums); // including 

        // backtrack

        ans.pop_back();
        subset(i+1, nums.size(), ans, result, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        subset(0, nums.size(), ans, result, nums);
        return result;
    }
};