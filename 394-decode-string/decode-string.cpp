class Solution {
public:
    string decodeString(string s) {
        stack<int>numst;
        stack<string>strst;
        int num=0;
        string current ="";
        for(int i=0;i<s.size();i++){
            if(s[i]>= '0' && s[i] <= '9' ){
                num = num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                numst.push(num);
                strst.push(current);
                num=0;
                current="";

            }
            else if(s[i]==']'){
                int rep=numst.top();
                numst.pop();
                string prev=strst.top();
                string temp="";
                strst.pop();
                for(int i=0;i<rep;i++){
                    temp += current;
                }
                current=prev+temp;
            }
            else{
                current += s[i];
            }
        }
        return current;
    }
};