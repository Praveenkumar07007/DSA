#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str = "9-5+3*4/6";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < str.length(); i++) {
        char ch = str.at(i);
        int ascii = (int)ch;

        if (ascii >= 48 && ascii <= 57) {
            val.push(ascii - 48);
        } else if (op.empty() || ch == '(') {
            op.push(ch);
        } else {
            while (!op.empty() && op.top() != '(' &&
                ((ch == '+' || ch == '-') && (op.top() == '+' || op.top() == '-')) ||
                ((ch == '*' || ch == '/') && (op.top() == '*' || op.top() == '/'))) {
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                char oper = op.top();
                op.pop();
                if (oper == '-')
                    val.push(v1 - v2);
                else if (oper == '+')
                    val.push(v1 + v2);
                else if (oper == '*')
                    val.push(v1 * v2);
                else if (oper == '/')
                    val.push(v1 / v2);
            }
            op.push(ch);
        }
    }

    while (val.size() > 1) {
        int v2 = val.top();
        val.pop();
        int v1 = val.top();
        val.pop();
        char oper = op.top();
        op.pop();
        if (oper == '-')
            val.push(v1 - v2);
        else if (oper == '+')
            val.push(v1 + v2);
        else if (oper == '*')
            val.push(v1 * v2);
        else if (oper == '/')
            val.push(v1 / v2);
    }

    cout << val.top() << endl;

    return 0;
}
