class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        double n = nums.size()/3;
        vector<int> x;
        unordered_map<int, int> m;
        for(int i:nums){
            m[i]++;
        }
        for(auto it:m){
            if( it.second > n)x.push_back(it.first);
        }
        return x;
    }
};