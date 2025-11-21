class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        if (a.first > b.first) {
            return a.first < b.first;
        } else if (a.first < b.first) {
            return a.first < b.first;
        } else {
            return a.second < b.second;
        }
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int> > pr;

        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                cnt += mat[i][j] == 1;
            }
            pr.push_back({cnt, i});
        }

        sort(pr.begin(), pr.end(), cmp);

        vector<int> ans;
        for (auto prr: pr) {
            cout << prr.first << " " << prr.second << endl;
            if (ans.size() < k) ans.push_back(prr.second);
        }
        return ans;
    }
};
