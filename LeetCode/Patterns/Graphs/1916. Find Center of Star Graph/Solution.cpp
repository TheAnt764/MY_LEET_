class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> m;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                m[edges[i][j]]++;
            }
        }
        for(auto it:m){
            if(it.second == 2)return it.first;
        }
        return -1;
    }
};