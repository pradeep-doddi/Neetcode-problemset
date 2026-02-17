class Solution {
public:
    int minLength(string s) {
      int ans=0;
      stack<char>st;
      for(auto i : s){
        if(st.empty()) {st.push(i); continue;}
        if((st.top()=='A' && i == 'B' ) || (st.top()=='C' && i=='D')){
            st.pop();
        }
        else{
            st.push(i);
        }
      }
      return st.size();
    }
};