class Solution {
public:
    bool searchArray(vector<vector<int>> array, int target) {
        if (array.empty() || array[0].empty()) return false;

        int i = 0, j = array[0].size() - 1;
        while (i < array.size() && j >= 0) {
            if (array[i][j] == target)  return true;
            if (i < array.size() && array[i][j] < target)  ++i;
            else  --j;
        }
        return false;
    }
};