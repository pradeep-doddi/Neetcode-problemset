class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]] += 1;
        }
        int ans=-1;
        for(auto i : mp){
            if(i.first==i.second && i.first>ans){
                ans=i.first;
            } 
        }
        return ans;
    }
};