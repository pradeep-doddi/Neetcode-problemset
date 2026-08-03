class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1,s2;
        vector<vector<int>>ans(2);
        for(auto x : nums1){
            s1.insert(x);
        }
        for(auto x : nums2){
            s2.insert(x);
        }
        for(auto it : s1){
            if(!s2.count(it)){
                ans[0].push_back(it);
            }
        }
        for(auto it : s2){
            if(!s1.count(it)){
                ans[1].push_back(it);
            }
        }
        return ans;

    }
};