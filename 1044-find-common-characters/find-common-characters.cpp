class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>freq(26,INT_MAX);
        for(auto ans:words){
            vector<int>temp(26,0);
            for(int i=0;i<ans.size();i++){
                temp[ans[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                freq[i]=min(freq[i],temp[i]);
            }

        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            while(freq[i]--){
                ans.push_back(string(1,'a'+i));
            }
        }
        return ans;
    }
};