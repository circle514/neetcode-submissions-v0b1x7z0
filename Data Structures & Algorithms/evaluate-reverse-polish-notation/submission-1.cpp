class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int first, second;
        for (string oper : tokens) {
            if (oper == "+") {
                first = stoi(st.top());
                st.pop();
                second = stoi(st.top());
                st.pop();
                st.push(to_string(first + second));
            } else if (oper == "-") {
                first = stoi(st.top());
                st.pop();
                second = stoi(st.top());
                st.pop();
                st.push(to_string(second - first));
            } else if (oper == "*") {
                first = stoi(st.top());
                st.pop();
                second = stoi(st.top());
                st.pop();
                st.push(to_string(first * second));
            } else if (oper == "/") {
                first = stoi(st.top());
                st.pop();
                second = stoi(st.top());
                st.pop();
                st.push(to_string(second / first));
            } else {
                st.push(oper);
            }
        }
        return stoi(st.top());
    }
};
