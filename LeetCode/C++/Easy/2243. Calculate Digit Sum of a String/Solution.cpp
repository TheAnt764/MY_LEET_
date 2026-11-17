class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k){
            vector<string> str;
            string a = "";
            int b = 0;
            for (int i =0;i<s.length();i++){
                a+=s[i];
                b++;
                if (b==k||i==s.length()-1){
                    str.push_back(a);
                    a = "";
                    b = 0;
                }
            }
            for (int i =0;i<str.size();i++){
                string temp = str[i];
                int x = 0;
                for (int j = 0; j < temp.length(); j++){
                    x += (temp[j] - '0');
                }
                str[i] = to_string(x);
            }
            s = "";
            for (string t : str){
                s += t;
            }
        }return s;
    }
};