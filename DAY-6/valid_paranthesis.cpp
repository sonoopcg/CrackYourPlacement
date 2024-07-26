#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> brackets = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char c : s) {
        if (brackets.find(c) != brackets.end()) {
            // If the stack is not empty and the top of the stack is the corresponding opening bracket
            if (!st.empty() && st.top() == brackets[c]) {
                st.pop();
            } else {
                return false;
            }
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";

    cout << isValid(s1) << endl;  // Output: 1 (true)
    cout << isValid(s2) << endl;  // Output: 1 (true)
    cout << isValid(s3) << endl;  // Output: 0 (false)

    return 0;
}
