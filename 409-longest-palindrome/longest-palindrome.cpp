class Solution {
public:
    int longestPalindrome(string s) {

        map<char,int> mp;
        int ans = 0;

        for(char c : s){
            mp[c]++;
        }

        for(auto it : mp){
            ans += (it.second / 2) * 2;
        }

        if(ans < s.size())
            ans++;

        return ans;
    }
};