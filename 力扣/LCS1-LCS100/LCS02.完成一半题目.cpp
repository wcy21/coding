class Solution {
  public:
    int halfQuestions(vector<int> &questions) {
        int a[1007] = {0};
        for (int i = 0; i < questions.size(); ++i)
            a[questions[i]]++;

        sort(a + 1, a + 1001, greater<int>());

        int ans = 0, tmp = questions.size() / 2;
        for (int i = 1; i <= 1000; ++i) {
            ans++;
            tmp -= a[i];
            if (tmp <= 0)
                break;
        }
        return ans;
    }
};