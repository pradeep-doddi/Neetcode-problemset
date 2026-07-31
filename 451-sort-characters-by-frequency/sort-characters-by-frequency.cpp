class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        string ans = "";
        for(auto ch: s  ){
            mp[ch] += 1;
        }
        vector<vector<char>>buck(s.size()+1);
        for(auto it : mp){
            buck[it.second].push_back(it.first);
        }
        for(int i=buck.size()-1;i>=0;i--){
            for(auto j : buck[i]){
                ans += string(i,j);
            }
        }
        return ans;   
    }
};