class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>frq;
        vector<int>ans;
        for(auto i:nums){
            frq[i] += 1;
        }
        vector<vector<int>>buck(nums.size()+1);
        for(auto it : frq){
            int index=it.second;
            int val=it.first;
            buck[index].push_back(val);
        }
        for(int i=buck.size()-1;i>=0;i--){
            for(auto num : buck[i]){
                ans.push_back(num);
                if(ans.size()==k) return ans;
            }
        }
        return ans;
    }

};