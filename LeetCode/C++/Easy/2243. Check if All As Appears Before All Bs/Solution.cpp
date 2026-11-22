class Solution {
public:
    bool checkString(string s) {
        int i=0;
        while(s[i]!='b'){
            if(i>s.length())break;
            i++;
        }
        for(i;i<s.length();i++){
            if(s[i]=='a')return false;
        }
        return true;
    }
};