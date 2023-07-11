class Solution {
public:
    int leastMinutes(int n) {
        int speed = 1, ans = 0;
        while (n) {
            if (n > speed) {
                ans++;
                speed <<= 1;
            }
            else
                break;
        }
        return ans + 1;
    }
};