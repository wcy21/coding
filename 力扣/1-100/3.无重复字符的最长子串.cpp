class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int n = s.size(), r = -1, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i != 0)
                us.erase(s[i - 1]);
            while (r + 1 < n && !us.count(s[r + 1])) {
                us.insert(s[r + 1]);
                ++r;
            }
            ans = max(ans, r - i + 1);
        }
        return ans;
    }
};