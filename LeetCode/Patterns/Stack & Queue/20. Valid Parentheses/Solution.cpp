class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)return false;
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(!stk.empty()){
                char top = stk.top();
                char curr = s[i];
                if((curr==']' && top == '[')|| (curr=='}' && top == '{' )|| (curr==')' && top=='(')){
                    stk.pop();
                    continue;
                }
            }
            stk.push(s[i]);
        }
        return stk.empty();
    }
};