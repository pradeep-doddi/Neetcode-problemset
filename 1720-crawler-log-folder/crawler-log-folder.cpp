class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> st;

        for (auto i : logs) {
            if (i == "../") {
                if (!st.empty()) {
                    st.pop_back();
                }
            }
            else if (i != "./") {
                st.push_back(i);
            }
        }

        return st.size();
    }
};
