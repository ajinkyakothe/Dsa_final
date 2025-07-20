class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        // always use the for each for the string

        for (char c : s) {
            if (!st.empty()) {
                if (c == '*') {
                    st.pop();
                } else {
                    st.push(c);
                }

            } else {
                st.push(c);
            }
        }

        string res = "";

        while (!st.empty()) {
            char temp = st.top();
            st.pop();
            res += temp;
        }
        reverse(res.begin(), res.end());

        return res;
    }
};