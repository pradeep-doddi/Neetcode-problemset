class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>freq(27,0);
        for(auto &word:words){
            for(auto i: word){
                freq[i-'a']++;
            }
        }
        for(auto i : freq){
            if(i%(words.size())!=0) return false;
        }
        return true;
    }
};