class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1)return {{strs[0]}};
        
        vector<vector<string>> result;
        vector<int> hash ;
        for(string str: strs){
            int temp = 0;
            for(int i=0;i<str.length();i++){
                temp += str[i] - 'a';
            }
            hash.push_back(temp);
        }
        unordered_map<int,int> m;
        for(int i:hash){
            m[i]++;
        }

        for(auto it : m){
            vector<string> temp;
            for(int i=0;i<hash.size();i++){
                if(hash[i] == it.first){
                    temp.push_back(strs[i]);
                }
            }
            result.push_back(temp);
        }

        return result;
    }
};