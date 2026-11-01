class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int i=0;i<arr.size();i++){
            int target = 2*arr[i];
            if(m.find(target)==m.end()){
                m[arr[i]]++;
            }else{
                return true;
            }
        }return false;
    }
};