class Solution {
public:
    int hammingDistance(int x, int y) {
        int val = x ^ y, ans = 0;
        while (val) {
            ans += 1;
            val &= val - 1;
        }
        return ans;
    }
};