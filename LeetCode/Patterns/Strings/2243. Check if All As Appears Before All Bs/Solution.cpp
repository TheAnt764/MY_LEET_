class Solution {
public:
    bool checkString(string s) {
        bool ans = true;
        int i=0;
        while(s[i]!='b'){
            if(i>s.length())break;
            i++;
        }
        for(i;i<s.length();i++){
            if(s[i]=='a')ans= false;
        }
        return ans;
    }
};