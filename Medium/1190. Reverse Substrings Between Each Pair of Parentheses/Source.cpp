#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == ')')
            {
                string temp;
                while (!st.empty() && st.top() != '(')
                {
                    temp += st.top();
                    st.pop();
                }

                if (!st.empty())
                {
                    st.pop();
                }

                for (char revCh : temp) {
                    st.push(revCh);
                }
            }
            else
            {
                st.push(ch);
            }
        }

        string result;
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution test;
    string s = "(abcd)";
    cout << test.reverseParentheses(s);
    return 0;
}