class Solution {
public:
    int maxProductAfterCutting(int length) {
        if (length <= 3)  return 1 * (length - 1);

        int ans = 1;
        while (length > 4) {
            ans *= 3;
            length -= 3;
        }
        ans *= length;
        return ans;
    }
};