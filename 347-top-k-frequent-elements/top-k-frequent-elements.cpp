class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        for (int num : nums)
            freq[num]++;

        vector<pair<int,int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(),
             [](const pair<int,int>& a, const pair<int,int>& b) {
                 return a.second > b.second;
             });

        vector<int> ans;

        for (auto &p : v) {
            ans.push_back(p.first);
            if (--k == 0)
                break;
        }

        return ans;
    }
};