class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);

        for(char c : s)
            freq[c]++;

        int len = 0;
        bool odd = false;

        for(int f : freq) {
            if(f % 2 == 0) {
                len += f;
            } else {
                len += f - 1;  
                odd = true;     
            }
        }

        return odd ? len + 1 : len;
    }
};