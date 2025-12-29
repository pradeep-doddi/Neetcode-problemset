class Solution {
public:
    string revesesingle(string s){
        string ans="";
        for(int j=s.size()-1;j>=0;j--){
            ans += s[j];
        }
        return ans;
    }
    string reverseWords(string s) {
        string ans="";
        int i=0;
        string ans2="";
        cout<<s.size();
        while(i<s.size()){
            if(s[i]!=' '){
                ans2 += s[i];
            }
            else{
                string mainanswer  = revesesingle(ans2);
                ans += mainanswer;
                ans += ' ';
                ans2=""; 
            }
            i++;
        }
        if(ans2 != " "){
            ans += revesesingle(ans2);
        }
        return ans;

    }
};