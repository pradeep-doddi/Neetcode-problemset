class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(auto i : tokens ){
            if(i == "+" || i== "-" || i=="*" || i== "/"){
               int ans=0;
               int b= stoi(st.top());
               st.pop();
               int a=stoi(st.top());
               st.pop();
               if (i == "+") {
                    ans = a + b;
                }
                else if (i == "-") {
                    ans = a - b;
                }
                else if (i == "*") {
                    ans = a * b;
                }
                else if (i == "/") {
                    ans = a / b;
                }
               st.push(to_string(ans));
            
            }
            else{
                st.push(i);
            }
        }
        return stoi(st.top());
    }
};