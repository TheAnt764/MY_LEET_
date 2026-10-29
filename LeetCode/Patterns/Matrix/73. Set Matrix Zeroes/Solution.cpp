class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();

        unordered_set<int> m;
        unordered_set<int> n;

        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(matrix[i][j]==0){
                    m.insert(i);
                    n.insert(j);
                }
            }
        }

        for(auto it : n){
            for(int i=0;i<x;i++){
                matrix[i][it]=0;
            }
        }

        for(auto it : m){
            for(int i=0;i<y;i++){
                matrix[it][i]=0;
            }
        }
    }
};