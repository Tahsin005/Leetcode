class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        unordered_map<long long, int> magics = {
            {18129162870LL, 1},
            {34732340370LL, 1},
            {35233568370LL, 1},
            {19632846870LL, 1},
            {10579416120LL, 1},
            {26180137620LL, 1},
            {11080644120LL, 1},
            {27683821620LL, 1},
        };

        int m = grid.size();
        int n = grid[0].size();

        auto ismagic = [&](int i, int j) -> int {
            if (grid[i + 1][j + 1] != 5) {
                return 0;
            }

            long long magic = 0;
            for (int ii = 0; ii < 3; ++ii) {
                for (int jj = 0; jj < 3; ++jj) {
                    magic = (magic << 4) | grid[i + ii][j + jj];
                }
            }

            return magics.count(magic) ? magics[magic] : 0;
        };

        int result = 0;
        for (int i = 0; i < m - 2; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                result += ismagic(i, j);
            }
        }

        return result;
    }
};
