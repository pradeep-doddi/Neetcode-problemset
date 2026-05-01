class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp;
        vector<string>ans;
        string wrd;
        stringstream ss1(s1),ss2(s2);
        while(ss1>>wrd){
            mp[wrd] += 1; 
        }
        while(ss2>>wrd){
            mp[wrd] += 1;
        }
        for(auto i:mp){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;

    }
};