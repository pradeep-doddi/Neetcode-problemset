class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>strvec;
        map<string,char>mp1;
        map<char,string>mp2;
        string ans = "";
        for(auto i : s){
            
            if(i==' '){
                strvec.push_back(ans);
                ans = "";
            }
            else{
                ans += i;
            }
        }
        strvec.push_back(ans);
        if(strvec.size() != pattern.size()) return false;
        for(int i=0;i<pattern.size();i++){
            if(mp1.count(strvec[i]) && mp1[strvec[i]] != pattern[i] ){
                return false;
            }
            if(mp2.count(pattern[i]) && mp2[pattern[i]] != strvec[i]){
                return false;
            }
            mp1[strvec[i]] = pattern[i];
            mp2[pattern[i]] = strvec[i];
        }
        return true;
    }
};