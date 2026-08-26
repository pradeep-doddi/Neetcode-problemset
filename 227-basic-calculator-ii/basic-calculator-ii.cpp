class Solution {
public:
    int calculate(string s) {
        stack<int> ans;
        int nums = 0;
        char op = '+';

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                nums = nums * 10 + (s[i] - '0');
            }


            if (s[i] == '+' || 
                s[i] == '-' || 
                s[i] == '*' || 
                s[i] == '/' || 
                i == s.size() - 1) {

                if (op == '+') {
                    ans.push(nums);
                }
                else if (op == '-') {
                    ans.push(-nums);
                }
                else if (op == '*') {
                    int x = ans.top();
                    ans.pop();
                    ans.push(x * nums);
                }
                else if (op == '/') {
                    int x = ans.top();
                    ans.pop();
                    ans.push(x / nums);
                }

                nums = 0;
                op = s[i];
            }
        }

        int result = 0;

        while (!ans.empty()) {
            result += ans.top();
            ans.pop();
        }

        return result;
    }
};
