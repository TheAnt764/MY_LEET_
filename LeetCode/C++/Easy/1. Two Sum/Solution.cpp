class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        m[nums[0]] = 0;
        for(int i=1;i<nums.size();i++){
            if(m.find(target-nums[i])==m.end()){
                m[nums[i]] = i;
            }else{
                auto it = m.find(target-nums[i]);
                return {i,it->second};
            }
        }return {-1,-1};
    }
};