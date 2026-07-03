class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n%2 != 0) return false;
        stack<char> st;
        int i = 0;
        while (i<n) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else {
                if(st.empty()){
                    return false;
                }
                char tp = st.top();
                if(tp == '(' && s[i] == ')'){
                    st.pop();
                }
                else if(tp == '{' && s[i] == '}'){
                    st.pop();
                }
                else if(tp == '[' && s[i] == ']'){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            i++;
        }
        if(!st.empty()) return false;
        return true;
    }
};