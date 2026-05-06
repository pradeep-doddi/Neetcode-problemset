class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>al(26,0);
        for(char i : s){
            al[i-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(al[s[i]-'a']==1) return i;
        }
       return -1;
    }
};