class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        vector<int>ans;
        for(auto i : nums){
            freq[i] += 1;
        }
        priority_queue<pair<int,int>>pq;
        for(auto ele : freq){
            pq.push({ele.second,ele.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};