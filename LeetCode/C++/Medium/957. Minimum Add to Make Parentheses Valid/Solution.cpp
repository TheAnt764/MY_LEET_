class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!stk.empty() && stk.top()=='(' &&s[i]==')'){
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }return stk.size();
    }
};