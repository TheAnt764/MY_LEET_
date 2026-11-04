class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> result;
        for(int i=0;i<matrix.size();i++){
            int ans = 0;
            for(int j=0;j<matrix.size();j++){
                ans+=matrix[i][j];
            }
            result.push_back(ans);
        }
        return result;
    }
};