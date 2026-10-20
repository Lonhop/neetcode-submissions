class Solution {
public:

    string encode(const vector<string>& strs) {
        string str;
        for (string s : strs) {
            str += s + ".";
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string str;
        for (char c : s) {
            if (c != '.') {
                str += c;
            }
            else {
                strs.push_back(str);
                str = "";
            }
        }
        return strs;
    }
};
