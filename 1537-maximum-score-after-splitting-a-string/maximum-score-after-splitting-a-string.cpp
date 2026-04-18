class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        for(auto i : s){
            if(i=='1') ones++;
        }
        int zeros=0;
        int maxi=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0') zeros++;
            else ones--;
            maxi=max(maxi,ones+zeros);
        }
        return maxi;
    }
};