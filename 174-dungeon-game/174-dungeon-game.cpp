class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        if (dungeon.empty()) return 0;
        int n = dungeon.size(), m = dungeon[0].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0x3f3f3f3f));
        dp[n - 1][m - 1] = max(1, 1 - dungeon[n - 1][m - 1]);
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                auto num = dungeon[i][j];
                if (i + 1 < n) dp[i][j] = dp[i + 1][j] - num;
                if (j + 1 < m) dp[i][j] = min(dp[i][j], dp[i][j + 1] - num);
                dp[i][j] = max(dp[i][j], 1);
            }
        }
        return dp[0][0];
    }
};