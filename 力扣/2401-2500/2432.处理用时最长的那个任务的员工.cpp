class Solution {
  public:
    int hardestWorker(int n, vector<vector<int>> &logs) {
        int maxId = logs[0][0], maxCost = logs[0][1];
        for (int i = 1; i < logs.size(); ++i) {
            int id = logs[i][0];
            int cost = logs[i][1] - logs[i - 1][1];
            if (cost > maxCost || cost == maxCost && id < maxId) {
                maxId = id;
                maxCost = cost;
            }
        }

        return maxId;
    }
};