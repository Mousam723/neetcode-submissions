class Solution {
   public:
    bool comp(double a, double b) { return a < b; }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        map<vector<int>, double> mp;
        for (auto i : points) {
            double val = sqrt(pow(i[0], 2) + pow(i[1], 2));
            mp[i] = val;
        }
        vector<pair<vector<int>, double>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
