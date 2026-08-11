class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans="";
        for(auto i : s ){
            if(!st.empty() && tolower(st.top())==tolower(i) && isupper(st.top()) != isupper(i)){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};