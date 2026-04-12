class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i] != s[j]) return (j-i)+1;
            else{
                char ans= s[i];
                while(i<=j && s[i]==ans) i++;
                while(i<=j && s[j]==ans) j--;
            }
        }
        return (j-i)+1;
    }
};