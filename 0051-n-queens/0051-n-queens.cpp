class Solution {
public:
    void helper(int i, int j, vector<vector<string>>& res,
                vector<string>& found, vector<vector<int>>& ij, int q, int n) {
        if (q == n) {
            res.push_back(found);
            return;
        }

        bool safe = true;

        for (auto it : ij) {
            if (it[0] == i || it[1] == j ||
                abs(it[0] - i) == abs(it[1] - j)) {
                safe = false;
                break;
            }
        }

        if (!safe) return;

        found[i][j] = 'Q';
        ij.push_back({i, j});

        if (i + 1 == n) {
            helper(i + 1, 0, res, found, ij, q + 1, n);
        } else {
            for (int k = 0; k < n; k++) {
                helper(i + 1, k, res, found, ij, q + 1, n);
            }
        }

        ij.pop_back();
        found[i][j] = '.';
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> found(n, string(n, '.'));
        vector<vector<int>> ij;

        for (int j = 0; j < n; j++) {
            helper(0, j, res, found, ij, 0, n);
        }

        return res;
    }
};