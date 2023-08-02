class Solution {
public:
    string replaceSpaces(string &str) {
        string ret;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ' ')
                ret += "%20";
            else
                ret += str[i];
        }
        return ret;
    }
};