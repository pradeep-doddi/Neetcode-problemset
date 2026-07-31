class Solution {
public:
    string frequencySort(string s) {
        map<char,int>frq;
        string ans="";
        for(auto i : s){
            frq[i] += 1;
        }
        vector<pair<char,int>>vec(frq.begin(),frq.end());
        sort(vec.begin(),vec.end(), [](const auto a, const auto b){
            return a.second>b.second;
        });
        for(auto it : vec){
            ans += string(it.second,it.first);
        }
        return ans;
    }
};