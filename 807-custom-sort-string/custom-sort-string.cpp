class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>ans(26,0);
        string finalans="";
        for(auto i : s){
            ans[i-'a'] += 1;
        }
        for(auto i : order){
            string result(ans[i-'a'],i);
            finalans += result;
            ans[i-'a']=0;
        }
        for(int i=0;i<26;i++){
            if(ans[i]>0){
                finalans += string(ans[i],i+'a');
            }
        }
        return finalans;
    }
};