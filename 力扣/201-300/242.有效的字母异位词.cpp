class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        map<char, int> mp;
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]]--;
            mp[t[i]]++;
        }
        
        for (char i = 'a'; i < 'z'; ++i)
            if (mp[i] != 0)
                return false;
        return true; 
    }
};