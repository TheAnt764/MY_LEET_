class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> result;

        for(int i=0;i<m;i++){
            string temp = "";
            for(int j=0;j<n;j++){
                 if(m==n){
                    if(i==j)temp+=".";
                    else if(j-i==1)temp+=".";
                    else temp+="#";
                 }
                 else if(m>n){
                    if(i==j)temp+=".";
                    else if(i-j==1)temp+=".";
                    else if(i>n-1 && j==n-1)temp+=".";
                    else temp+="#";
                 }
                 else{
                    if(i==j)temp+=".";
                    else if(j-i==1)temp+=".";
                    else if(i==m-1 && j>m-1)temp+=".";
                    else temp+="#";
                 }
            }
            result.push_back(temp);
            temp = "";
        }
        return result;
    }
};