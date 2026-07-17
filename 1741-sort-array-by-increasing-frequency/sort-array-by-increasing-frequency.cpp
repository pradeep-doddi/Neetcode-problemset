class Solution {
public:
    static bool cmp(pair<int,int>mp1,pair<int,int>mp2){
        if(mp1.second==mp2.second){
            return mp1.first>mp2.first;
        }
        return mp1.second<mp2.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),cmp);
        vector<int>ans;
        for(auto p : vec){
            while(p.second--){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};