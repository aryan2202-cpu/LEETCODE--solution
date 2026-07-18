#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Push opening brackets
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            // Check closing brackets
            else if (c == ')' || c == ']' || c == '}') {
                if (st.empty())
                    return false; // No matching opening

                char top = st.top();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false; // Mismatch
                }
                st.pop(); // Matched, remove from stack
            }
        }

        return st.empty(); // All brackets closed?
    }
};
