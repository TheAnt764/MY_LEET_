class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1)return {{1}};
        vector<vector<int>> arr(n,vector<int>(n));
        int fill = 1;
        int rs=0,re=n-1,cs=0,ce=n-1;
        while(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++){
                arr[rs][i]=fill++;
            }rs++;
            for(int i=rs;i<=re;i++){
                arr[i][ce]=fill++;
            }ce--;
            for(int i=ce;i>=cs;i--){
                arr[re][i]=fill++;
            }re--;
            for(int i=re;i>=rs;i--){
                arr[i][cs]=fill++;
            }cs++;
        }
        return arr;
    }
};