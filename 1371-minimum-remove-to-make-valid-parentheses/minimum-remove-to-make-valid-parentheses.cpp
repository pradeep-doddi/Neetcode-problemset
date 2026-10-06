class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        set<int>se;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()){
                    se.insert(i);
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            se.insert(st.top());
            st.pop();
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(se.find(i)==se.end()){
                ans += s[i];
            }
        }
        return ans;
    }
};