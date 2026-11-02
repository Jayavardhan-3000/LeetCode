class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (isOperator(tokens[i])) {
                int val2 = popr(st);
                int val1 = popr(st);
                st.push(operation(val1, val2, tokens[i]));
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }

    int operation(int val1, int val2, string op) {
        if (op == "+") return val1 + val2;
        else if (op == "-") return val1 - val2;
        else if (op == "/") return val1 / val2;
        else return val1 * val2;
    }

    int popr(stack<int>& st) {
        int val = st.top();
        st.pop();
        return val;
    }

    bool isOperator(string s) {
        return (s == "+" || s == "-" || s == "*" || s == "/");
    }
};