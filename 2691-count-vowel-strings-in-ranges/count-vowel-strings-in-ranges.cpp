class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>isvowel;
        unordered_set<char>vowels={'a','e','i','o','u'};
        vector<int>ans;
        vector<int>presum(words.size()+1,0);
        for(auto word : words){
            if(vowels.find(word[0]) != vowels.end() && vowels.find(word[word.size()-1]) != vowels.end()){
                isvowel.push_back(1);
            }
            else{
                isvowel.push_back(0);
            }
        }
        for(int i=0;i<isvowel.size();i++){
            presum[i+1]=isvowel[i]+presum[i];
        }
        for(auto query: queries){
            int l=query[0];
            int r = query[1];
            ans.push_back(presum[r+1]-presum[l]);
        }
        return ans;
    }
};