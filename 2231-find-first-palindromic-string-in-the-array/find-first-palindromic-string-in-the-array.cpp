class Solution {
public:
    bool ispalindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i : words){
            string ans = i;
            if(ispalindrome(ans)){
                return i;
            }
        }
        return "";
    }
};