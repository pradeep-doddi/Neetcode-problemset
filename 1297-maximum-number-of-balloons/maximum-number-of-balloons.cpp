class Solution {
public:
    int maxNumberOfBalloons(string text) {
     map<char,int>mp;
     int ans=INT_MAX;
     int number =0;
     for(auto c : text){
        mp[c] += 1;
     }
    map<char, int> req = {
        {'b', 1},
        {'a', 1},
        {'l', 2},
        {'o', 2},
        {'n', 1}
    };
     for(auto m:req){
       ans=min(ans,mp[m.first]/m.second);
     }
    return ans;

    }
};