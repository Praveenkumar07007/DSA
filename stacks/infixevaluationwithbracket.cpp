#include <iostream>
#include <stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    return 0; // Return 0 for other characters
}

int solve(int val1, int val2, char ch) {
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main() {
    string s = "2+6*4/8-3";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if(s[i]>=48&&s[i]<=57 ){
            val.push(s[i]-48);
        } else {
            if (op.empty() || s[i] == '(') {
                op.push(s[i]);
            } else if (op.top() == '(') {
                op.push(s[i]);
            } else if (s[i] == ')') {
                while (op.top() != '(') {
                    if (op.empty()) {
                        cout << "Invalid parentheses" << endl;
                        return 1;
                    }
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                // Remove the matching '('
                op.pop();
            } else if (prio(s[i]) > prio(op.top()) || op.empty()) {
                op.push(s[i]);
            } else {
                while (!op.empty() && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    return 0;
}
