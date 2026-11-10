class Solution {
public:
    void load_subset(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& result) {
        if (i == arr.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        load_subset(arr, ans, i+1, result);
        ans.pop_back();
        load_subset(arr, ans, i+1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        load_subset(nums, ans, 0, result);
        return result;
    }
};